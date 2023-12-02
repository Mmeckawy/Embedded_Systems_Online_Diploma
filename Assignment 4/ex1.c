#include <stdio.h>

void primeNumbers(int a, int b){
    int temp = 0;
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    else{
        for(int i = a; i<=b; i++){
            int isPrime = 1;
            for(int j = 2; j<i/2; j++){
                if(i % j == 0){
                    isPrime = 0;
                }
            }
            if(isPrime == 1){
                printf("%d ", i);
            }          
        }
    }
}

int main(){
    int num1, num2;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &num1, &num2);
    printf("Prime numbers between %d and %d are: \n", num1, num2);
    primeNumbers(num1, num2);
}