#include <stdio.h>

int main(){
    int i, x = 0, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if(x < 0){
        printf("Error !!! factorial of a negative number doesn't exist.");
    }
    else if(x == 0){
        printf("Factorial = 1");
    }
    else{
        for(i = 1; i<= x; i++)
        {
            fact *= i;
        }
        printf("Factorial = %d", fact);
    }
}