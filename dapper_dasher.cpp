#include "raylib.h"

int main ()
{
  const int width {400};
  const int height {600};
  const int fps {60};



  InitWindow(width, height, "Dapper Dasher👾");
  SetTargetFPS(fps);

  while (!WindowShouldClose())
  {
    BeginDrawing();

    ClearBackground(WHITE);

    EndDrawing();

  }

  CloseWindow();

}