#include <stdio.h>

int main() 

{
    double p, g;
    int i;
    
    p=100000;
    g= 0.10;

    printf("Current population: 100000.\nPopulation chart for previous 10 years is given below:\n\n");
    printf("Year \t Population\n");
    for (i = 10; i >= 1; i--) 
    {
        p = p / (1 + g);

        printf("%d \t %.0f\n", i, p);
    }

    return 0;
}