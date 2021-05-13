#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
   
    if (argc == 2)
    {

     
        bool valid_key = false;

        
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]))
            {
                valid_key = true;
            }
            
            else
            {
                printf("Usage ./caesar key\n");
                return 1;
            }
        }

       
        int key = atoi(argv[1]);

        
        if (valid_key == true)
        {
            char input[500];
            printf(": ");
            fgets(input, sizeof(input), stdin);

            for (int i = 0; i < strlen(input); i++)
            {
                if (isupper(input[i]))
                {
                    input[i] = ((input[i] - 65 + key) % 26) + 65;
                }
                else if (islower(input[i]))
                {
                    input[i] = ((input[i] - 97 + key) % 26) + 97;
                }
            }
            printf("ciphertext: %s", input);
        }
    }
    
    else
    {
        printf("Usage ./caesar key\n");
        return 1;
