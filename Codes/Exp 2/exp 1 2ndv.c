#include <stdio.h>

int main() {

    printf("Task 1: Find the value of each of the following arithmetic expressions\n\n");

    float A, C, D, E, F, G, H, I, K;
    int B, J;
    A = 3 + 4.8 * 2;
    B = 12 % 16; 
    C = 2. * 6 / 5;
    D = 5.2 + 12 / 8;
    E = 4 - (6 + 18.0 / 3) / 3;
    F = 17 - 12 * 4;
    G = 2 * 6 / 5.;
    H = 7 / (4 * 2);
    I = 2 * 6 / 5;
    J = 19 % 13; 
    K = 36.0 / 60.0;
    printf("A) 3 + 4.8 * 2 = %f\n", A);
    printf("B) 12 %% 16 = %d\n", B);
    printf("C) 2. * 6 / 5 = %f\n", C);
    printf("D) 5.2 + 12 / 8 = %f\n", D);
    printf("E) 4 - (6 + 18.0 / 3) / 3 = %f\n", E);
    printf("F) 17 - 12 * 4 = %f\n", F);
    printf("G) 2 * 6 / 5. = %f\n", G);
    printf("H) 7 / (4 * 2) = %f\n", H);
    printf("I) 2 * 6 / 5 = %f\n", I);
    printf("J) 19 %% 13 = %d\n", J);
    printf("K) 36.0 / 60.0 = %f\n", K);
    return 0;
}