#include <stdio.h>

int main() {
  char str[100], temp;
  int len;

  printf("Enter a String : ");
  gets(str);

  // Find the length of the string
  for(len = 0; str[len] != '\0'; len++);

  for(int i = 0; i < len / 2; i++) 
  {
      temp = str[i];
      str[i] = str[len - i - 1];
      str[len - i - 1] = temp;
  }

  printf("Reverse string is : %s",str);
  return 0;
}

