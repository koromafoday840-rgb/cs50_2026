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
    char plaintext[1000];
    printf("Enter your plaintext: ");
    fflush(stdout);
    fgets(plaintext, sizeof(plaintext), stdin);
    printf(ciphertext);
    int plaintext_text = strlen(plaintext);
    for (int i = 0; i < )
    if (isupper(plaintext))
    {
        char c = (p - 'A' + ) % 26 + 'A';
        printf("%c", c);
    }
    else if (islower(plaintext))
    {
        char c = (p - 'a' + key) % 26 + 'a';
    }
    printf("%c", c);
    else 
    plaintext == " " || plaintext == " ! " || plaintext == " ? ";
    {
        printf("%c", p)
    }
    for (int = 0; plaintext[i] != '\0'; i++)
    {  
        char p = plaintext[i];
    }
if (isupper(p));
{
    c = (p - 'A' + key) % 26 + 'A';
    printf("%c", c);
}
else if (islower(p))
{
    c = (p - 'a' + key) % 26 + 'a';
    printf("%c", c);
}
else
{ 
    printf("%c", c);
}









}

