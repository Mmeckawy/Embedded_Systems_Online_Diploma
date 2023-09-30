#include <stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
    {
        printf("%c is an alphabet", c);
    }
    else printf("%c is not an alphabet", c);
}