#include <stdio.h>

int main() 
{
    int n, i;
    int numbers[100]; 
    int max, min;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &numbers[i]);

    max = min = numbers[0];

    for (i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    
    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);

    return 0;
}
