#include "Pokitto.h"

#define BEASTSPRITES 262144
uint16_t BeastPallet[]={
0x0,
0xffff,
0x740e,
0x4a88,
0x7fff,
0x3ff,
0x780f,
0xff33,
0xfbef,
0xfbe0,
0xc1a0,
0x7800,
0x7fe0,
0x5cc0,
0x32c0,
0xffe0,
};
void drawcombat(){
    game.display.directBitmap(1,1,game.display.screenbuffer,4,0);
    //game.display.directRectangle(20,100,100,100,3);
}
void initcombat(uint8_t beast){
    isBattle = true;
    game.display.clear();
    game.display.persistence = true;
    fileSeekAbsolute(BEASTSPRITES+(beast*8192));
    fileReadBytes(game.display.screenbuffer+2,8192);
    game.display.screenbuffer[0] = 128;
    game.display.screenbuffer[1] = 128;
    uint8_t color[2];
    for(size_t i = 0; i < 16; i++)
    {
        fileReadBytes(color,2);
        BeastPallet[i] = (color[0]<<8) | color[1];
    }
    game.display.load565Palette(BeastPallet);
    //game.display.directBitmap(1,1,game.display.screenbuffer,4,1);
    
}