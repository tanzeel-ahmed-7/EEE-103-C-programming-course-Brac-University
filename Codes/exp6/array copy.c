#include <stdio.h>

void copyarray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) 
        *(destination + i) = *(source + i);
}

int main() 
{
    int source[100], destination[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements of the source array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &source[i]);

    copyarray(source, destination, n);

    printf("Elements of the destination array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", destination[i]);
    
    printf("\n");

    return 0;
}
