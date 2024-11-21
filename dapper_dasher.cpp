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



  InitWindow(width, height, "Dapper Dasher👾");
  SetTargetFPS(fps);

  while (!WindowShouldClose())
  {
    BeginDrawing();

    ClearBackground(WHITE);

    //rectangle drawing
    DrawRectangle(rectanglePosX, rectanglePosY, rectangleWidth, rectangleHeight , BLUE);

    EndDrawing();

  }

  CloseWindow();

}