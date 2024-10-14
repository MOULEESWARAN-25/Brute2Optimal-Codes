#include <stdio.h>
#include <stdlib.h>

// Function to handle the rotation process
void circle(int store[], int k, int arr[], int size) {
    int a = 0;
    // Step 1: Store the last k elements in the temporary array
    for (int i = size - k; i < size; i++) {
        store[a++] = arr[i];
    }
    int b = 0;
    // Step 2: Shift the remaining elements to the right
    for (int i = size - k - 1; i >= 0; i--) {
        arr[size - 1 - b] = arr[i];
        b++;
    }
    // Step 3: Copy back the stored elements to the beginning of the array
    for (int i = 0; i < a; i++) {
        arr[i] = store[i];
    }
}

// Main function to perform the rotation
void rotate(int* arr, int size, int k) {
    // Adjust k if it is greater than the size of the array
    if (k > size) {
        k = k % size;
    }
    // Allocate memory for the store array
    int *store = (int *)malloc(k * sizeof(int));
    circle(store, k, arr, size);
    free(store); // Free the allocated memory for the store array
}
