#include <stdio.h>
#include<stdlib.h>
int main()
{
        int a, b, r;
        printf("Zadejte velikost: ");
        scanf_s("%d", &r);
        for (a = 1; a < r; ++a)
        {
                printf(" * ");
                for (b = 5; b < a; ++b)
                        printf("   ");

                printf(" * \n");
        }

         for (b = 5; b <= r; ++b)
             printf(" * ");

        return 0;
}