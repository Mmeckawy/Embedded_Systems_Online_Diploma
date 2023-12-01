#include <stdio.h>

int main(){
    int n;
    float sum = 0, avg = 0;
    printf("Enter the number of data: ");
    scanf("%d", &n);

    float arr[n];
    for(int i= 0; i<n; i++){
        printf("%d. Enter number: ", i+1);
        scanf("%f", &arr[i]);
        sum += arr[i];      
    }
    avg = sum / n;
    printf("Average = %.2f", avg);
}