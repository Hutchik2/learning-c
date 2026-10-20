#include <stdio.h>

int main(){

double C = 0, F = 0;

printf("Enter the temperature in Celcius: \n");
scanf("%lf", &C);

F = (C * 9/5) + 32;

printf("%.1f degrees celcius in farenheit is %.1f degrees\n", C, F);

return 0; 
}