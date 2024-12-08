/*
Raylib example file.
This is an example main file for a simple raylib project.
Use this as a starting point or replace it with your code.

-- Copyright (c) 2020-2024 Jeffery Myers
--
--This software is provided "as-is", without any express or implied warranty. In
no event
--will the authors be held liable for any damages arising from the use of this
software.

--Permission is granted to anyone to use this software for any purpose,
including commercial
--applications, and to alter it and redistribute it freely, subject to the
following restrictions:

--  1. The origin of this software must not be misrepresented; you must not
claim that you
--  wrote the original software. If you use this software in a product, an
acknowledgment
--  in the product documentation would be appreciated but is not required.
--
--  2. Altered source versions must be plainly marked as such, and must not be
misrepresented
--  as being the original software.
--
--  3. This notice may not be removed or altered from any source distribution.

*/

#include "grid.h"
#include "raylib.h"

int main() {
  Color Red = {255, 0, 0, 255};
  InitWindow(300, 600, "Raylib Tetris");
  SetTargetFPS(60);

  Grid grid = Grid();
  grid.grid[0][0] = 1;
  grid.grid[3][5] = 4;
  grid.grid[17][8] = 7;
  grid.Print();

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(Red);
    grid.Draw();

    EndDrawing();
  }

  CloseWindow();
}
