#pragma once
#include <raylib.h>
#include <vector>

class Grid {
public:
  Grid();
  void Initialize();
  void Print();
  void Draw();
  int grid[20][10];

private:
  std::vector<Color> GetCollors();
  int numRows;
  int numCols;
  int cellSize;
  std::vector<Color> colors;
};
