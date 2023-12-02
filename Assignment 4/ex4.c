#include <stdio.h>

int PowerOf(int num, int power){
    if(power == 0){
        return 1;
    }
    else if(power == 1){
        return num;
    }
    else if(power < 0){
        // Error
        return -1;
    }
    else{
        return num * PowerOf(num, power - 1);
    }
}

int main(){
    int base, pow;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number (must be positive): ");
    scanf("%d", &pow);
    printf("%d ^ %d = %d", base, pow, PowerOf(base,pow));
}