int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int** arr=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
         arr[i] =(int*)malloc(n*sizeof(int));
    }
    int iteration=0;
    int i=0,j=0;
    for (int iteration = 0; iteration < commandsSize; iteration++) {
        if (strcmp(commands[iteration], "UP") == 0 ) {
            i--;
        } else if (strcmp(commands[iteration], "DOWN") == 0 ) {
            i++;
        } else if (strcmp(commands[iteration], "LEFT") == 0) {
            j--;
        } else if (strcmp(commands[iteration], "RIGHT") == 0 ) {
            j++;
        }
    }

    return (i*n)+j;
}