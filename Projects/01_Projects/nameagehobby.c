#include <stdio.h>

int main() {
int age;
char name [50];
char hobby [100];


printf("Hello whats your name: \n");
scanf("%49s", name);

printf("Now, how old are you: \n");
scanf("%d", &age);

printf("Finally, whats your favorite hobby: \n");
scanf(" %99[^\n]", hobby);

printf("So your name is %s, you are %d years old, and your favorite hobby is %s!\n", name, age, hobby);

return 0;
}

