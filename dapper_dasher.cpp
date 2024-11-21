#include "raylib.h"

int main ()
{
  //window
  const int width {400};
  const int height {600};
  const int fps {60};

  //rectangle
  const int rectangleWidth {40};
  const int rectangleHeight {50};
  int rectanglePosX {(width/2)-(rectangleWidth/2)};
  int rectanglePosY {height-rectangleHeight};
  int rectangleYVelocity {0}; // when jumping each frame will decrease by jumpVelo, when falling increase by gravity 
  const int jumpVelocity {-22}; // acceleration (22p/f)/f
  const int gravity {1}; // acceleration
  bool isInAir {}; //false , to prevent air jumping



  InitWindow(width, height, "Dapper Dasher👾");
  SetTargetFPS(fps);

  while (!WindowShouldClose())
  {
    BeginDrawing();

    ClearBackground(WHITE);

    //rectangle drawing
    DrawRectangle(rectanglePosX, rectanglePosY, rectangleWidth, rectangleHeight , BLUE);

    // jumping logic

    // check is rectangle on ground
    if (rectanglePosY >= height-rectangleHeight)
    {
      isInAir = false;
      rectangleYVelocity = 0;
    }
    else
    {
      // rectangle in the air , it will comback to the ground by gravity
      isInAir = true;
      rectangleYVelocity += gravity;
    }

    // jump logic
    if(IsKeyPressed(KEY_SPACE) && !isInAir)
    {
      rectangleYVelocity += jumpVelocity;
    }

    rectanglePosY += rectangleYVelocity;

    EndDrawing();

  }

  CloseWindow();

}