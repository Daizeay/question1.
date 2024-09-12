#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int num_elements;

    // Prompt user for the number of elements
    printf("Input the number of elements: ");
    scanf("%d", &num_elements);

    // Handle edge case of zero or negative elements
    if (num_elements <= 0) {
        fprintf(stderr, "The total number of elements must be greater than zero.\n");
        return 1;
    }

    // Allocate memory for the array
    array = (int *)malloc(num_elements * sizeof(int));
    if (array == NULL) {
        fprintf(stderr, "Failed memory allocation.\n");
        return 1;
    }

    // Input elements
    printf("Input %d elements:\n", num_elements);
    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &array[i]);
    }

    // Print elements in reverse order
    printf("The elements given in reverse order:\n");
    for (int i = num_elements - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Deallocate the memory
    free(array);

    return 0;
}