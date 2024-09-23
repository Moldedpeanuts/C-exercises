
//How to accept user input in C

#include <stdio.h>

int main() {
    int age;
    
    printf("How old are you?\n");
    scanf("%d", &age);

    printf("You are %d years old\n", age);

    return 0;
}
