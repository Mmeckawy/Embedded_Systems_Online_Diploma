#include <stdio.h>

int main(){
    float x, y, res = 0;
    char op;
    printf("Enter operator either + or - or * or /: ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &x, &y);

    switch (op)
    {
    case '+':
        res = x + y;
        printf("%.1f %c %.1f = %.1f", x, op, y, res);
        break;

    case '-':
        res = x - y;
        printf("%.1f %c %.1f = %.1f", x, op, y, res);
        break;

    case '*':
        res = x * y;
        printf("%.1f %c %.1f = %.1f", x, op, y, res);
        break;

    case '/':
        res = x / y;
        printf("%.1f %c %.1f = %.1f", x, op, y, res);
        break;            
    
    default:
        break;
    }
}