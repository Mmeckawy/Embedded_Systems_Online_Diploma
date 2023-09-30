#include <stdio.h>

int main(){
    float x, y, z;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);
    if(x > y){
        if(x > z)
        {
          printf("Largest number = %.2f", x);  
        }
        else if (z > y)
        {
            printf("Largest number = %.2f", z);
        }
    }
    else{
        if(y > z)
        {
          printf("Largest number = %.2f", y);  
        }
        else
        {
            printf("Largest number = %.2f", z);
        }
    } 
}