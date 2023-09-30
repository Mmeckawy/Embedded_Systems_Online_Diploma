#include <stdio.h>

int main(){
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if(c == ('a' || 'e' || 'i' || 'o' || 'u' || 'A' || 'E' || 'I' || 'O' || 'U')){
        printf("%c is a vowel.", c);
    }
    else printf("%c is a consonant.", c);
    
}