#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen (argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;
        }

        int key = atoi(argv[1]);

        string plaintext = get_string("Plaintext: ");
        printf("Ciphertext: ");

        for(int t = 0; t < strlen(plaintext); t++ )
        {
            if(isupper(plaintext[t]))
            {
                printf("%c", (plaintext[t] - 65 + key) % 26 + 65);
            }

            else if (islower(plaintext[t]))
            {
                printf("%c", (plaintext[t] - 97 + key) % 26 + 97);
            }

            else
            {
                printf("%c", plaintext[t]);
            }
        }
        printf("\n");
    }


}