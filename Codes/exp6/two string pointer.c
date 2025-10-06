#include <stdio.h>
void concatenate(char *str1, char *str2) 
{ while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
int main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (char *p = str1; *p != '\0'; p++) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
    }
    for (char *p = str2; *p != '\0'; p++) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
    }
    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
