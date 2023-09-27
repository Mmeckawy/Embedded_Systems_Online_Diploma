#include <stdio.h>

int main(){
    int x,y, sum = 0;
    printf("%s","Enter two integers: ");
    scanf("%d %d", &x ,&y);

    sum = x + y;
    printf("Sum: %d",sum);
}