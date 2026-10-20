#include <stdio.h>

int main(){

    char name[50];
    int age;

    printf("Whats your name and age? \n");
    scanf("%s", name);
    scanf("%d", &age);

    printf("Hello it's nice to meet you %s! You are %d years old!\n", name, age);

    return 0;
}