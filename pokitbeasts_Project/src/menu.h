#include "Pokitto.h"

void drawMenu(){
    
}

void save(){
    fileClose();
    uint8_t px[2] = {player.x,player.y};
    if(!fileOpen("SAVE.TST", FILE_MODE_OVERWRITE)){
        fileWriteBytes(px,2);
        fileClose();
    }
    initOverworld();
}

void load(){
    fileClose();
    uint8_t px[2];
    if(!fileOpen("SAVE.TST", FILE_MODE_READONLY)){
        fileReadBytes(px,2);
        player.x = px[0];
        player.y = px[1];
        fileClose();
    }
    initOverworld();
}