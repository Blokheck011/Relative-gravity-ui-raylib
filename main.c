#include <string.h>
#include "libraries/raylib.h"


int main() {

    //variables
    int earthWeight;
    double earthgravity = 1;
    double mercurygravity = 0.38; //planetchoice 1
    double venusgravity = 0.91; //planetchoice 2
    double marsgravity = 0.38; //planetchoice 3
    double jupitergravity = 2.34; //planetchoice 4
    double saturngravity = 1.06; //planetchoice 5
    double uranusgravity = 0.92; //planetchoice 6
    double neptunegravity = 1.19; //planetchoice 7
    int planetchoice = 0;
    Vector2 screencenter;

  //Initialization
    InitWindow(GetScreenWidth(), GetScreenHeight(), "relative-gravity");
    if (IsWindowReady()){
      ToggleFullscreen();
      }
    
    Image icon = LoadImage("resources/icon.png");
    SetWindowIcon(icon);
    
    SetTargetFPS(60);      
    ShowCursor();

  //load images
  Texture2D earthbg = LoadTexture("resources/earth.png");
  Texture2D mercurybg = LoadTexture("resources/mercury.png");
  Texture2D venusbg = LoadTexture("resources/venus.png");
  Texture2D marsbg = LoadTexture("resources/mars.png");
  Texture2D jupiterbg = LoadTexture("resources/jupiter.png");
  Texture2D saturnbg = LoadTexture("resources/saturn.png");
  Texture2D uranusbg = LoadTexture("resources/uranus.png");
  Texture2D neptunebg = LoadTexture("resources/neptune.png");

  while (!WindowShouldClose()){
    //update
    //int ScreenWidth = GetScreenWidth();
    //int ScreenHeight = GetScreenHeight();
    //float HalfScreenWidth = ScreenWidth/2;
    //float HalfScreenHeight = ScreenHeight/2;

    //drawing
    BeginDrawing();

    switch(planetchoice) {
      case (0): {
        DrawTexture(earthbg, 0, 0, WHITE);
        DrawText("Welcome to the relative gravity app, where you can see your weight on another planet!", 30, 20, 35, WHITE);
        DrawText("Please choose your weight and planet down below.", 30, 60, 35, WHITE);
        DrawText("weight: " +earthWeight, 30, 160, 50, WHITE);
        break;
      }
      case (1): {
        DrawTexture(mercurybg, 0, 0, WHITE);
        break;
      }
      case (2): {
        DrawTexture(venusbg, 0, 0, WHITE);
        break;
      }
      case (3): {
        DrawTexture(marsbg, 0, 0, WHITE);
        break;
      }
      case (4): {
        DrawTexture(jupiterbg, 0, 0, WHITE);
        break;
      }
      case (5): {
        DrawTexture(saturnbg, 0, 0, WHITE);
        break;
      }
      case (6): {
        DrawTexture(uranusbg, 0, 0, WHITE);
        break;
      }
      case (7): {
        DrawTexture(neptunebg, 0, 0, WHITE);
        break;
      }
    }

    EndDrawing();
  }
}
