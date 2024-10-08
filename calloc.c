#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5, i;

    // Allocate memory for 5 integers using calloc
    arr = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print the elements to see they are initialized to 0
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // All elements will be 0
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
