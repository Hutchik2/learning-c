#include <stdio.h>

int main(){

    unsigned int num; 

    printf("Check if a number is even or odd using bitwise operators, enter here: \n");
    scanf("%u", &num);

    if ((num & 1) == 1){
        printf("The number you entered (%u) is odd\n", num);
    }
        else{
            printf("The number you entered (%u) is even\n", num);
        }

    return 0;
}