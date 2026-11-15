int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count=0;
    int n = gridColSize[0];
    for(int row=0, col=n-1; row<gridSize && col>=0;){
        if(grid[row][col]<0){
            count+=(gridSize-row);
            col--;
        }else{
            row++;
        }
    }
    return count;    
}