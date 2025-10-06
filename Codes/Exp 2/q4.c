#include<stdio.h>

int main()
{
    printf("Task 04:\n");

    float radius, area, pi=3.1416;

    printf("Please input the radius of the circle: ");
    scanf("%f", &radius);

    area=pi*radius*radius;

    printf("The value of the area of circle is %.4f (square unit)", area);

    return 0;
}
