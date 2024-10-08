#include <stdio.h>
#include <stdlib.h>

int main() {

    int *size = (int*)malloc(sizeof(int)); // Dynamically allocate memory for size
    if (size == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int *newSize = (int*)malloc(sizeof(int)); // Dynamically allocate memory for newSize
    if (newSize == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter the number of elements: ");
    scanf("%d", size);

    // dynamically allocate me*mory
    int *ptr = (int*) calloc(*size, sizeof(int));

    // check if memory allocated successfully
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int *p = ptr; p < ptr + *size; p++) {
        printf("Enter element n%d: ", p - ptr + 1);
        scanf("%d", p);
    }

    printf("\n\nEnter the new size of the array: ");
    scanf("%d", newSize);

    ptr = (int*) realloc(ptr, (*newSize) * sizeof(int));
    
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // input new elements
    for (int *p = ptr + *size; p < ptr + *newSize; p++) {
        printf("Enter element n%d: ", p - ptr + 1);
        scanf("%d", p);
    }

    for (int *p = ptr; p < ptr + *newSize; p++)
        printf("element n%d = %d\n", p - ptr + 1, *p);

    free(ptr);
    free(size);
    free(newSize);

    return 0;
}
