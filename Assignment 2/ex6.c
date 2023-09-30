#include <stdio.h>

int main(){
    int i, x = 0, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);
    for(i = 1; i<= x; i++)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
}