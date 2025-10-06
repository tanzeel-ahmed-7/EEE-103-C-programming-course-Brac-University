#include <stdio.h>

int reverse_num(int num) 
{
    int reverse = 0;
    while (num > 0) 
    {
        reverse = reverse * 10 + num % 10;
        num = num/10;
    }
    return reverse;
}

int palindrome(int num) 
{
    return num == reverse_num(num);
}

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(palindrome(number))
        printf("%d is a Palindrome number.\n", number);
    else
        printf("%d is Not a Palindrome number.\n", number);

    return 0;
}
