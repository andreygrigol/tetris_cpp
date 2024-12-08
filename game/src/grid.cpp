#include "grid.h"
#include <iostream>
#include <raylib.h>

Grid::Grid() {
  numRows = 20;
  numCols = 10;
  cellSize = 30;
  Initialize();
  colors = GetCollors();
}

void Grid::Initialize() {
  for (int row = 0; row < numRows; row++) {
    for (int column = 0; column < numCols; column++) {
      grid[row][column] = 0;
    }
  }
}

void Grid::Print() {
  for (int row = 0; row < numRows; row++) {
    for (int column = 0; column < numCols; column++) {
      std::cout << grid[row][column] << " ";
    }
    std::cout << std::endl;
  }
}

std::vector<Color> Grid::GetCollors() {
  Color darkGray = {69, 69, 69, 255};
  Color red = {255, 0, 0, 255};
  Color green = {0, 255, 0, 255};
  Color blue = {0, 0, 255, 255};
  Color orange = {255, 165, 0, 255};
  Color yellow = {255, 255, 0, 255};
  Color purple = {128, 0, 128};
  Color cyan = {0, 255, 255, 255};

  return {darkGray, red, green, blue, orange, yellow, purple, cyan};
}

void Grid::Draw() {
  for (int row = 0; row < numRows; row++) {
    for (int column = 0; column < numCols; column++) {
      int cellValue = grid[row][column];
      DrawRectangle(column * cellSize + 1, row * cellSize + 1, cellSize - 1,
                    cellSize - 1, colors[cellValue]);
    }
  }
}
