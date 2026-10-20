#include <stdio.h>
#include <math.h>

int main(){

    float a, p, r, n, t;

    printf("Enter the starting amount of $ you have: \n");
    scanf("%f", &p);

    printf("Enter your interest rate as a whole number (5percent as 5): \n");
    scanf("%f", &r);
    r = r / 100;

    printf("Enter the number of compounding periods per 12 months: \n");
    scanf("%f", &n);

    printf("Enter the time in years to see the $ you would have by then: \n");
    scanf("%f", &t);

    a = p * pow(1 + (r / n) , (n * t));

    printf("In %.1f years you will have $%.2f\n", t, a);

    return 0;
}