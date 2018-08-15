#include "Pokitto.h"
class character {
    
  public:
    int16_t x,y;
    /* //old load system, might no longer work!!!
    void save(){
        if(opendir("/sd/pokitbeasts.pok")==0) mkdir("/sd/pokitbeasts.pok", 0777);
        FILE *fp = fopen("/sd/pokitbeasts.pok/save.data", "wb");
        if(fp == NULL) {err ="could not create file"; }
        else{
        uint16_t buffer[2] = { x , y };
        fwrite (buffer , sizeof(int16_t),  2, fp);
        fclose(fp);
        }
    };
    void load(){
         if(opendir("/sd/pokitbeasts.pok")==0){ err=" no pokitbeasts.pok on sd";}
         else{
         FILE *fp = fopen("/sd/pokitbeasts.pok/save.data", "rb");
        if(fp == NULL) {err ="could not load save"; }
        else{
            uint16_t buffer[2];
            fread(buffer, sizeof(int16_t),  2,fp);
            x = buffer[0];
            y = buffer[1];
            fclose(fp);
        }
        }
    };
    */
    void draw(int x, int y){
        if(isanim){
             anim++;
             anim = anim%6;
        }else anim =0;
        static const uint8_t animate[] = {0,1,1,0,2,2};
        game.display.drawBitmap(x,y,playersprite[index+animate[anim]],0,flip);
    
    }
    void move(){
        isanim = false;
        if (game.buttons.repeat(BTN_LEFT,0) && game.buttons.repeat(BTN_DOWN,0) && game.buttons.repeat(BTN_RIGHT,0) && game.buttons.repeat(BTN_UP,0)){
            const uint8_t loop[]={0,0 ,3,0 ,6,0 ,9,0 ,12,0 ,9,1, 6,1,3,1};
            index = loop[loopindex];
            flip = loop[loopindex+1];
            loopindex+=2;
            loopindex = loopindex%16;
        }
        else{
            if (game.buttons.repeat(BTN_LEFT,0)){
                index = 2*3;
                flip =0;
                isanim = true;
                x-=speed;
            }
            if (game.buttons.repeat(BTN_RIGHT,0)){
                index = 2*3;
                flip = 1;
                isanim = true;
                x+=speed;
            }
            if (game.buttons.repeat(BTN_UP,0)){
               index = 4*3;
               flip =0;
               isanim = true;
               y-=speed;
            }
            if (game.buttons.repeat(BTN_DOWN,0)){
               index = 0;
               flip =0;
               isanim = true;
               y+=speed;
            }
            
            if (game.buttons.repeat(BTN_LEFT,0) && game.buttons.repeat(BTN_DOWN,0)){
                index = 1*3;
                flip =0;
            }
            if (game.buttons.repeat(BTN_LEFT,0) && game.buttons.repeat(BTN_UP,0)){
                index = 3*3;
                flip = 0;
            }
            if (game.buttons.repeat(BTN_RIGHT,0) && game.buttons.repeat(BTN_UP,0)){
               index = 3*3;
               flip =1;
            }
            if (game.buttons.repeat(BTN_RIGHT,0) && game.buttons.repeat(BTN_DOWN,0)){
               index = 1*3;
               flip =1;
            }
        }
    }
   private:
    int speed = 4;
    uint8_t loopindex =0;
    int index =0;
    int flip = 0;
    int anim = 0;
    bool isanim = false;
    
} player;

