#include <stdio.h>

int sumdigits(int num) 
{
    if (num == 0)
        return 0;
    else
        return (num % 10) + sumdigits(num / 10);
}

int main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Please enter a positive number.\n");
    else {
        int result = sumdigits(n);
        printf("Sum of digits of %d is %d\n", n, result);
    }

    return 0;
}
