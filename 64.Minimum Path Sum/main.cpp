int minPathSum(int** grid, int gridRowSize, int gridColSize) {
    int sum[gridRowSize][gridColSize];
    sum[0][0]=grid[0][0];
    int i,j,temp;
    for(i=1;i<gridRowSize;i++)sum[i][0]=grid[i][0]+sum[i-1][0];
    for(i=1;i<gridColSize;i++)sum[0][i]=grid[0][i]+sum[0][i-1];    
    for(i=1;i<gridRowSize;i++)
    for(j=1;j<gridColSize;j++)
    {
        temp=sum[i-1][j];
        if(temp>sum[i][j-1])temp=sum[i][j-1];
        sum[i][j]=grid[i][j]+temp;
    }
    return sum[gridRowSize-1][gridColSize-1];
}
