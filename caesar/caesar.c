#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    
    int arg_length = strlen(argv[1]);

    for (int i = 0, n = arg_length; i < n; i++)
    {
        if (!isdigit(argv[1][i]))        
        {
            printf("Usage: ./caesar key");
            return 1;
        }
    }    
    int key = atoi(argv[1]);
    printf("Enter your plaintext: ");
    if (isupper(*argv[1]))
    {
        c = (p - 65 + key) (% 26) + 65;
    }
    else if (islower(*argv[1]))
    {
        c = (p - 97 + key) (% 26) + 97;
    }




}

