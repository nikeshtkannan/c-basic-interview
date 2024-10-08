#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Allocating memory for 5 integers
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initializing array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Allocating more memory (for 10 integers)
    arr = (int *)realloc(arr, 10 * sizeof(int));

    // Check if memory reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initializing the new part of the array
    for (int i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Printing all the values
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Free the memory
    free(arr);

    return 0;
}
