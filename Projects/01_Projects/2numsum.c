#include <stdio.h> 

int main() {

    int num1, num2;

    printf("Please enter two numbers to add to each other: \n");
    scanf("%d %d", &num1, &num2);
  
    int sum = num1 + num2;

    printf("The sum of the two numbers is %d\n", sum);

    return 0;
}