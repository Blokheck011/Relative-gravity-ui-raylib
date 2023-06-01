#include <string.h>
#include "libraries/raylib.h"


int main() {

    //variables
    float earthWeight;
    double earthgravity = 1;
    double mercurygravity = 0.38;
    double venusgravity = 0.91;
    double marsgravity = 0.38;
    double jupitergravity = 2.34;
    double saturngravity = 1.06;
    double uranusgravity = 0.92;
    double neptunegravity = 1.19;
    char * planetchoice = "";

  //Initialization
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 450, "relative-gravity");
    SetWindowMinSize(800, 450);
    
    Image icon = LoadImage("resources/icon.png");
    SetWindowIcon(icon);
    
    SetTargetFPS(60);      
    ShowCursor();

  while (!WindowShouldClose()){
    //update
    int ScreenWidth = GetScreenWidth();
    int ScreenHeight = GetScreenHeight();
    int HalfScreenWidth = ScreenWidth/2;
    int HalfScreenHeight = ScreenHeight/2;

    //drawing
    BeginDrawing();


  }
}
