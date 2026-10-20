#include <stdio.h>

int main(){

    int a, b;

    printf("Enter the length for sides A and B to calculate perimeter and area: \n");
    printf(" |--------|\n");
    printf("a|        |\n");
    printf(" |--------|\n");
    printf("     b\n");
    
    scanf("%d %d", &a, &b);

    int perimeter = (a + b) * 2;
    int area = a * b;

    printf("The area is %d and the perimeter is %d\n", area, perimeter);

    return 0;
}