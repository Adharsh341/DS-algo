#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    arr = (int*) malloc(5 * sizeof(int)); // Allocate memory (int*) is a cast type
    if (arr == NULL) {
        printf("Memory alloc failed");

    // handle error
    }

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        printf("%d\n", arr[i]);
    }

    free(arr); // Free memory
    return 0;
}