int* getRow(int row, int* returnSize) {
    // Base case: if the row number is 0, return [1]
    if (row == 0) {
        *returnSize = 1;
        int* result = (int*)malloc(*returnSize * sizeof(int));
        result[0] = 1;
        return result;
    }
    
    // Allocate a 2D array to store the triangle values up to the requested row
    int** arr = (int**)malloc((row + 1) * sizeof(int*));
    for (int i = 0; i <= row; i++) {
        arr[i] = (int*)malloc((row + 1) * sizeof(int));
    }
    
    // Initialize the first row of the triangle
    arr[0][0] = 1;
    if (row > 0) {
        arr[1][0] = 1;
        arr[1][1] = 1;
    }
    
    // Fill in the triangle values using the sum of adjacent elements from the previous row
    for (int i = 2; i <= row; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
        for (int j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    
    // Allocate the result array for the requested row
    int* result = (int*)malloc((row + 1) * sizeof(int));
    for (int i = 0; i <= row; i++) {
        result[i] = arr[row][i];
    }

    *returnSize = row + 1;
    return result;
}
