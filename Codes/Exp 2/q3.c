#include <stdio.h> 

int main() 

{ 
 
long long lightspeed = 186000; // The speed of light in miles per second 

int days = 1000; // Specifying the number of days

long long seconds = days * 24 * 60 * 60; // Conversion days into seconds 

long long distance = lightspeed * seconds; // Calculating the distance of light travelling in the given number of days 

printf("In %d days, light will travel about %lld miles.\n", days, distance); //Printing the result 

return 0;

}
