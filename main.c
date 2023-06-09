#include <string.h>
#include "libraries/raylib.h"
#include <stdlib.h>

int main() {

    //variables
    double earthgravity = 1;
    double mercurygravity = 0.38; //planetchoice 1
    double venusgravity = 0.91; //planetchoice 2
    double marsgravity = 0.38; //planetchoice 3
    double jupitergravity = 2.34; //planetchoice 4
    double saturngravity = 1.06; //planetchoice 5
    double uranusgravity = 0.92; //planetchoice 6
    double neptunegravity = 1.19; //planetchoice 7
    int planetchoice = 0;
    int planet_pointer = 0;
    char *planet_pointer_text = malloc(100);
    int letterCount = 0;
    int charpressed;
    int EarthWeightInt;

  //Initialization
    InitWindow(GetScreenWidth(), GetScreenHeight(), "relative-gravity");
    if (IsWindowReady()){
      SetConfigFlags(FLAG_WINDOW_UNDECORATED);
      MaximizeWindow();
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
    int ScreenWidth = GetScreenWidth();
    int ScreenHeight = GetScreenHeight();
    float HalfScreenWidth = ScreenWidth/2;
    float HalfScreenHeight = ScreenHeight/2;

    switch (planet_pointer) {
      case 0: {
        strcpy(planet_pointer_text, "none");
        DrawTexture(earthbg, 0, 0, WHITE);
        break;
      }
      case 1: {
        strcpy(planet_pointer_text, "mercury");
        DrawTexture(mercurybg, 0, 0, WHITE);
        break;
      }
      case 2: {
        strcpy(planet_pointer_text, "venus");
        DrawTexture(venusbg, 0, 0, WHITE);
        break;
      }
      case 3: {
        strcpy(planet_pointer_text, "mars");
        DrawTexture(marsbg, 0, 0, WHITE);
        break;}
      case 4: {
        strcpy(planet_pointer_text, "jupiter");
        DrawTexture(jupiterbg, 0, 0, WHITE);
        break;
      }
      case 5: {
        strcpy(planet_pointer_text, "saturn");
        DrawTexture(saturnbg, 0, 0, WHITE);
        break;
      }
      case 6: {
        strcpy(planet_pointer_text, "uranus");
        DrawTexture(uranusbg, 0, 0, WHITE);
        break;
      }
      case 7: {
        strcpy(planet_pointer_text, "neptune");
        DrawTexture(neptunebg, 0, 0, WHITE);
        break;
      }

    }

    //drawing
    BeginDrawing();

    switch(planetchoice) {
      case (0): {
        
        
        if (IsKeyPressed(KEY_DOWN)){
          planet_pointer = planet_pointer-1;
        }
        if (IsKeyPressed(KEY_UP)){
          planet_pointer = planet_pointer+1;
        }
        if (IsKeyPressed(KEY_ENTER)) {
          planetchoice = planet_pointer;
        }

        if(planet_pointer>7) planet_pointer=7;
        if(planet_pointer<0) planet_pointer=0;      

        DrawText("Welcome to the relative gravity app, where you can see your weight on another planet!", 30, 20, 35, WHITE);
        DrawText("Please choose your weight and planet down below.", 30, 60, 35, WHITE);
        DrawText(TextFormat("weight: %03i", EarthWeightInt), 30, 160, 50, WHITE);
        DrawText(EarthWeightInt, 200, 160, 50, WHITE);
        DrawText(TextFormat("Planet > "), 30, 300, 50, WHITE);
        DrawText(TextFormat(planet_pointer_text), 250, 300, 50, WHITE);
        DrawText("Use the up/down arrow keys to change the planet.", 100, (ScreenHeight-100), 20, WHITE);
        break;
      }
      case (1): {
        DrawText(TextFormat("your weight on mercury would be: %i", (EarthWeightInt * mercurygravity)), 30, 20, 35, WHITE);
        break;
      }
      case (2): {
        DrawText(TextFormat("your weight on venus would be: %i", (EarthWeightInt * venusgravity)), 30, 20, 35, WHITE);        
        break;
      }
      case (3): { 
        DrawText(TextFormat("your weight on mars would be: %i", (EarthWeightInt * marsgravity)), 30, 20, 35, WHITE);       
        break;
      }
      case (4): {
        DrawText(TextFormat("your weight on jupiter would be: %i", (EarthWeightInt * jupitergravity)), 30, 20, 35, WHITE);        
        break;
      }
      case (5): {       
        DrawText(TextFormat("your weight on saturn would be: %i", (EarthWeightInt * saturngravity)), 30, 20, 35, WHITE);
        break;
      }
      case (6): {   
        DrawText(TextFormat("your weight on uranus would be: %i", (EarthWeightInt * uranusgravity)), 30, 20, 35, WHITE);     
        break;
      }
      case (7): {
        DrawText(TextFormat("your weight on neptune would be: %i", (EarthWeightInt * neptunegravity)), 30, 20, 35, WHITE);
        break;
      }
    }
    EndDrawing();
  }
  free(planet_pointer_text);
}
