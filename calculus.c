#include <stdio.h>

int main (){
    int x = 5;
    int y = 2;
    int z = x + y;
    int w = x - y;
    int q = x * y;
    float b = x /(float) y;
    printf("Addition:");
    printf("%2d\n",z);
    printf("Subtraction:");
    printf("%2d\n",w);
    printf("Multiplication:");
    printf("%2d\n",w);
    printf("Division:");
    printf("%2f\n",b);
}