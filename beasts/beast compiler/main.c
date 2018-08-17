#include <stdio.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main(int argc, char const *argv[])
{

	
	if (argc >1)
	{
		int pallet[16][3] = {
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1},
			{-1,-1,-1}
		};
		int x,y,n;
		unsigned char *data = stbi_load(argv[1], &x, &y, &n, 3);

		FILE *fp;
		
		if (argc >2) fp = fopen(argv[2], "w+");
		else fp = fopen("image.lua", "w+");

		fprintf(fp, "return { data ={");
		for (int i = 0; i < y; i++)
		{
			
			for (int j = 0; j < x; j+=2)
			{
				char top =0;
				char bottem =0;
				char trigger = 1;
				for (int p = 0; p < 16; p++)
				{
					if (trigger)
					{
						/* code */
					
					if( data[(j+(i*x))*3] 	 == pallet[p][0] &&
						data[((j+(i*x))*3)+1]== pallet[p][1] &&
						data[((j+(i*x))*3)+2]== pallet[p][2] )
					{
						//fprintf(fp,"%i",p);
						top = p;
						trigger = 0;
						//p=20;
						
					}else if (pallet[p][0] == -1)
					{
						pallet[p][0] = data[(j+(i*x))*3];
						pallet[p][1] = data[((j+(i*x))*3)+1];
						pallet[p][2] = data[((j+(i*x))*3)+2];
						//fprintf(fp,"%i",p);
						top = p;
						trigger = 0;
						//p=20;
						
					}
					}
				}
				trigger = 1;
				for (int p = 0; p < 16; p++)
				{
					if (trigger)
					{
					if( data[(j+1+(i*x))*3] 	 == pallet[p][0] &&
						data[((j+1+(i*x))*3)+1]== pallet[p][1] &&
						data[((j+1+(i*x))*3)+2]== pallet[p][2] )
					{
						//fprintf(fp,"%i",p);
						bottem = p;
						//p=20;
						trigger = 0;
						
					}else if (pallet[p][0] == -1)
					{
						pallet[p][0] = data[(j+1+(i*x))*3];
						pallet[p][1] = data[((j+1+(i*x))*3)+1];
						pallet[p][2] = data[((j+1+(i*x))*3)+2];
						//fprintf(fp,"%i",p);
						bottem = p;
						//p=20;
						trigger = 0;
						
					}
					}
				}
				fprintf(fp,"%i",((top<<4)|bottem));
				fprintf(fp, ", ");
			}
			fprintf(fp, "\n");
		}

		
		fprintf(fp, "},\npallet = {\n");
		for (int p = 0; p < 16; p++)
		{
			unsigned short pal = ((pallet[p][0] & 0b11111000) << 8) | ((pallet[p][1] & 0b11111100) << 3) | (pallet[p][2] >> 3);
			fprintf(fp,"0x%x,0x%x,",pal>>8,pal&0x00FF);
			fprintf(fp,"-- {%i, %i, %i},\n",pallet[p][0],pallet[p][1],pallet[p][2]);
		}
		fprintf(fp, "}}\n");
		stbi_image_free(data);
	}
	else printf("need png file\n");
	
	return 0;
}