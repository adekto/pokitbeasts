#include "Pokitto.h"

//SDFileSystem sd(P0_9,P0_8, P0_6, P0_7,"sd");
   /*
void loadovermap(uint16_t x, uint16_t y){
 
    if(!sd.disk_initialize()){
    if(opendir("/pokitbeasts.pok")==0){ err=" no pokitbeasts.pok on sd";}
    else{
        static FILE *fp = fopen("/pokitbeasts.pok/overmap.data", "rb");
        if(fp == NULL) {err ="could not load overmap"; }
        else{
        //fsetpos(fp,0);
            //uint16_t buffer[2];
            fseek(fp,x+(y*100),SEEK_SET);
            for(uint8_t i = 0; i <30; i++){
                //fseek(fp,i*500,SEEK_SET);
                fread(mapdate[i], sizeof(uint8_t),  30,fp);
                fseek(fp, 100-30,SEEK_CUR);
            }
            //x = buffer[0];
            //y = buffer[1];
            //fclose(fp);
        }
    }
  }

}
*/
void loadovermap(uint16_t x, uint16_t y){
    fileSeekAbsolute(x+(y*256));
    for(uint8_t i = 0; i <30; i++){
        fileReadBytes((uint8_t*)mapdate[i],30);
        fileSeekRelative(256-30);
    }
}
void initOverworld(){
    getFirstDirEntry();
    /*
    uint32_t myFile = fileOpen("POKBEAST.MAP", FILE_MODE_READONLY);
    if( !myFile ){
      loadovermap(1,1);
    }*/
    if(!fileOpen("POKBEAST.DAT", FILE_MODE_READONLY)) loadovermap(0,0);
}

void drawOverworld(){
    int ofsetx = player.x%240;
    int ofsety = player.y%240;
    static uint16_t sectorx = uint16_t((player.x/16)/15);
    static uint16_t sectory = uint16_t((player.y/16)/15);
    if(uint16_t((player.x/16)/15) != sectorx || uint16_t((player.y/16)/15) != sectory){
        sectorx = uint16_t((player.x/16)/15);
        sectory = uint16_t((player.y/16)/15);
        loadovermap(sectorx*15,sectory*15);
    }
        
    game.display.invisiblecolor =17;
    for(int x = ((ofsetx)/16); x < ((ofsetx)/16)+15; x++){
        for(int y = (ofsety)/16; y < ((ofsety)/16)+12; y++){
            if(x >=0 && y>=0 && x<30 && y<30 && mapdate[y][x]!=0)
                game.display.drawBitmap(x*16-ofsetx,y*16-ofsety,tiles[mapdate[y][x]-1]);
        }
    }
           // game.display.print(10,10, sectorx);
            //game.display.print(10,22, sectory);
    //reset transparancy
    game.display.invisiblecolor =15;

    //game.display.drawBitmap(10,10,playersprite[0]);
    player.draw(100,68);
    player.move();

    
   
}