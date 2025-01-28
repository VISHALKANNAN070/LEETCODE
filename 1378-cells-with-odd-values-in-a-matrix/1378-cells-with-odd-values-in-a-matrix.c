int oddCells(int m, int n, int** indices, int indicesSize, int* indicesColSize) {
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }
    for(int i=0;i<indicesSize;i++){
        for(int row=0;row<n;row++){
            arr[indices[i][0]][row]++;
        }
            for(int col=0;col<m;col++){
                arr[col][indices[i][1]]++;
            }
        }
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(arr[i][j]%2!=0){
                count++;
           }
        }
    }
return count;
}