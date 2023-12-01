#include <stdio.h>

int main() {
   int array[100], position, c, n, value;
   printf("Enter number of elements :");
   scanf("%d", &n);

   for(c = 0; c < n; c++){
    scanf("%d", &array[c]);
   }

   printf("Enter the element to be inserted : ");
   scanf("%d", &value);   
    
   printf("Enter the location : ");
   scanf("%d", &position);
   
   // shifting the elements from (position to n) to right
   for(c = n-1; c >= position-1; c--){
    array[c+1] = array[c];
   }
   array[position - 1] = value;   // inserting the given value

   for(c = 0; c <= n; c++){
    printf("%d ", array[c]);
   }
   return 0;
}
