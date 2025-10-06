#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], cleaned[200];
    int i, j = 0, length, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length; i++) {
        if (isalnum(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    for (i = 0; i < j / 2; i++) {
        if (cleaned[i] != cleaned[j - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("The text is a palindrome.:D \n");
    else
        printf("The text is not a palindrome. :(( \n");

    return 0;
}
