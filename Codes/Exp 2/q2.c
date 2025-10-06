#include<stdio.h>
int main()
{

printf("Task 2:\n");

char b;
int i = 257;
double d = 323.142;

b = i; //The character b is now defined as integer i
printf("%c\n",b);

b = (char) i; //int to char
printf("%c\n",b); //Trying to print a non-printable character

i = (int) d; //double to int
printf("%d\n",i); //Will printout 323 and remove the decimal points

b = (char) d; //double to char
printf("%c\n",b); //Will printout C because 323.142 converted to 67

}
