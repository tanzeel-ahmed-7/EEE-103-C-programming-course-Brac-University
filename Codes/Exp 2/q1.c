#include <stdio.h>

int main()
{
    printf("Task 1: Find the value of each of the following arithmetic expressions\n\n");

    //A) 3+4.8*2
    float A=3+4.8*2;
    printf("A) The answer is %.2f and\nthe breakdown is 3+4.8*2=3+9.6=12.60\n\n",A);

    //B) 12%6
    int B=12%16;
    printf("B) The answer is %.2f and\nthe breakdown is 12/6=0\n\n",B);

    //C) 2.*6/5
    float C=2.*6/5;
    printf("C) The answer is %.2f and\nthe breakdown is 2.*6/5=2.40\n\n",C);

    //D) 5.2+12/8
    float D=5.2+12/8 ;
    printf("D) The answer is %.2f and\nthe breakdown is 5.2+12/8=5.2+(12/8)=5.2+1.5=6.20\n\n",D);

    //E) 4 -(6+18.0/3)/3
    float E=4-(6+18.0/3)/3;
    printf("E) The answer is %.2f and\nthe breakdown is 4-(6+18.0/3)/3=4-{6+(18.0/3)/3}=4-(6+6.0)/3=4-(12.0/3)=4-4.0=0\n\n",E);

    //F) 17-12*4
    float F=17-12*4;
    printf("F) The answer is %.2f and\nthe breakdown is 17-12*4=17-(12*4)=17-48=31\n\n",F);

    // G) 2*6/5.
    float G=2*6/5. ;
    printf("G) The answer is %.2f and\nthe breakdown is 2*6/5.=12/5.=2.40\n\n",G);

    // H) 7/(4*2)
    float H=7/(4*2);
    printf("H) The answer is %.2f and\nthe breakdown is 7/(4*2)=7/8=0\n\n",H);

    // I) 2*6/5
    float I=2*6/5 ;
    printf("I) The answer is %.2f and\nthe breakdown is 2*6/5=12/5=2\n\n",I);

    // J) 19%13
    int J=19%13;
    printf("J) The answer is %.2f and\nthe breakdown is 19/13=0\n\n",J);

    // K) 36/60
    float K=36/60;
    printf("K) The answer is %.2f and\nthe breakdown 36/60=0\n\n",K);

    return 0;
}
