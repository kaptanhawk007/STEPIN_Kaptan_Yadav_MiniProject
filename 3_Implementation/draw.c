/**
 * @brief This function is used to draw the grid
 * 
 * @param Board 
 * @return int 
 */
int isdraw(char** Board) {
  for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      if (Board[i][j] == ' ') {
        // empty square, so game ain't over yet
        return 0;
      }
    }
  }
  // no empty squares, so it's a draw
  return 1;
}
