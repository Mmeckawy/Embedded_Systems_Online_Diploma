#include <stdio.h>
#include <string.h>

int main() {
   char str[100], c;
   int count = 0;

   printf("Enter a String : ");
   gets(str);
 
   printf("Enter a character to find its frequency : ");
   scanf("%c", &c);

  for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == c) {
          count++;
      }
  }

 printf("Frequency of %c = %d", c,count);
   return 0;
}
