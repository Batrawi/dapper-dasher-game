#include "raylib.h"

int main ()
{
  //window
  const int width {400};
  const int height {600};
  const int fps {60};
  InitWindow(width, height, "Dapper Dasher👾");
  SetTargetFPS(fps);

  //scarfy
  Texture2D scarfy = LoadTexture("textures/scarfy.png");
  
  // scarfy by frame
  Rectangle scarfyRec;
  scarfyRec.width = scarfy.width/6;
  scarfyRec.height = scarfy.height;
  scarfyRec.x = 0;
  scarfyRec.y = 0;

  // scarfy position in window
  Vector2 scarfyPos;
  scarfyPos.x = (width/2) - (scarfyRec.width/2);
  scarfyPos.y = height - scarfyRec.height;
  
  int scarfyVelocity {0}; 
  const int jumpVelocity {-22};
  const int gravity {1};
  bool isInAir {};




  while (!WindowShouldClose())
  {
    BeginDrawing();

    ClearBackground(WHITE);


    if (scarfyPos.y >= height-scarfyRec.height)
    {
      isInAir = false;
      scarfyVelocity = 0;
    }
    else
    {
      isInAir = true;
      scarfyVelocity += gravity;
    }

    if(IsKeyPressed(KEY_SPACE) && !isInAir)
    {
      scarfyVelocity += jumpVelocity;
    }

    scarfyPos.y += scarfyVelocity;

    // Draw scarfy
    DrawTextureRec(scarfy, scarfyRec, scarfyPos, WHITE);

    EndDrawing();

  }

  UnloadTexture(scarfy);
  CloseWindow();

}