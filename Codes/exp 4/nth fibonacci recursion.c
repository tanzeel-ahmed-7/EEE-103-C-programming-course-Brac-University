#include <stdio.h>

int f(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return f(n - 1) + f(n - 2);
}

int main() 
{
    int n;

    printf("Enter the (n) position to get the Fibonacci term: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Please enter a positive integer.\n");
            else {
        int result = f(n);
        printf("Fibonacci term at position %d is %d\n", n, result);
        }

    return 0;
}
