#include "raylib.h"

int main ()
{
  const int width {400};
  const int height {600};



  InitWindow(width, height, "Dapper Dasher👾");

  while (!WindowShouldClose())
  {
    BeginDrawing();

    ClearBackground(WHITE);

    EndDrawing();

  }

  CloseWindow();

}