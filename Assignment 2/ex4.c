#include <stdio.h>

int main(){
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    if(x > 0)
    {
        printf("%.2f is positive.", x);
    }
    else if(x < 0)
    {
        printf("%.2f is negative.", x);
    }
    else printf("You entered a zero.");
}