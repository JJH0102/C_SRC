#include <stdio.h>

int main ()
{
    int num1 = 0, num2 = 0;
    int num3 = 0;
    char oper = NULL;

    printf("사칙연산 입력(정수) : ");
    scanf("%d %c%d", &num1, &oper, &num2);

    /*
    if (oper == '+')
        num3 = num1 + num2;

    else if (oper == '-')
        num3 = num1 - num2;

    else if (oper == '*')
        num3 = num1 * num2;

    else if (oper == '/')
        num3 = num1 / num2;
    */

   switch (oper)
   {
   case '+':
    num3 = num1 + num2;
    break;

   case '-':
    num3 = num1 - num2;
    break;

   case '*':
    num3 = num1 * num2;
    break;

   case '/':
    num3 = num1 / num2;
    break;
   
   default:
    break;
    
   }

    printf("%d %c %d = %d\n", num1, oper, num2, num3);

    return 0;
}