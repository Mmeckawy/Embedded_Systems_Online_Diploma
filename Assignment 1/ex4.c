#include <stdio.h>

int main(){
    float x,y, mul = 0;
    printf("%s","Enter two numbers: ");
    scanf("%f %f", &x ,&y);
    mul = x * y;
    printf("Product: %f",mul);
}