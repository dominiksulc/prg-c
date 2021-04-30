#include <stdio.h>

int main()
{
   char oper;
   double num1, num2;


   printf("Napiš co chceš vypočítat\n");
   scanf("%f%c%f", &num1, &oper, &num2);


   switch(oper)
   {
    case '+':
        printf("num1+num2=%.2f",num1+num2);
        break;
    case '-':
        printf("num1-num2=%.2f",num1-num2);
        break;
        case '*':
        printf("num1*num2=%.2f",num1*num2);
        break;
    case '/':
        if(num2 != 0)
        {
                    printf("num1/num2=%.2f",num1/num2);
            break;
        }
        else
        {
            printf("Špatně! Dělíte nulou.");
            break;
        }
    default:
        printf(" Špatně zadaný operátor.");
        break;
   }
   return 0;
}