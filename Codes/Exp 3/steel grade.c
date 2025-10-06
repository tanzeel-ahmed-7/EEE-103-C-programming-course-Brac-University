#include<stdio.h>
int main()
{
    float hardness, carbon, tensile, cod1, cod2, cod3;

    printf("Enter the required formation amount of steel below");

    printf("\n");

    printf("Enter the hardness: ");
    scanf("%f", &hardness);

    printf("Enter the carbon content: ");
    scanf("%f", &carbon);

    printf("Enter the tensile strength: ");
    scanf("%f", &tensile);

    cod1= hardness>50;
    cod2= carbon<0.7;
    cod3= tensile>5600;

    if(cod1 && cod2 && cod3)
        printf("Grade 10");
    else if (cod1 && cod2)
        printf("Grade 9");
    else if (cod2 && cod3)
        printf("Grade 8");
    else if (cod1 && cod3)
        printf("Grade 7");
    else if (cod1 || cod2 || cod3)
        printf("Grade 6");
    else
        printf("Grade 5");

    return 0;
}
