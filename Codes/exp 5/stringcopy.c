#include <stdio.h>
#include <string.h>

int main() 
{
    char a[100], b[100], c[200];

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    strcpy(c, a);
    strcat(c, b);

    printf("The concatenated string is: %s\n", c);

    return 0;
}
