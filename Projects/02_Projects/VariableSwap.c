#include <stdio.h>

int main(){

    int a, b;

    printf("Enter 2 integers to be swapped");
    scanf("%d %d", &a, &b);
    printf("The value of A is %d and the value of B is %d\nThey are now going to be swapped\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of A is %d and the value of B is %d\n", a, b);
    return 0;
}