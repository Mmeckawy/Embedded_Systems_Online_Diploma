#include <stdio.h>

int main() {
   int arr[100], position = 0, n, value;
   printf("Enter number of elements :");
   scanf("%d", &n);

   for(int i = 0; i < n; i++)
   {
    scanf("%d", &arr[i]);
   }

   printf("Enter the element to be searched : ");
   scanf("%d", &value);   
    
   for(int i = 0; i < n; i++)
   {
    if(arr[i] == value){
        position = i+1;
    }
   }

   if(position == 0){
    printf("Element not found!");
   }
   else{
    printf("Number found at the location : %d", position);
   }
   return 0;
}
