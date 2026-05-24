#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int counter = 0;
    int small = 0;
    char text[] = "Hello, Foday";
    int length = strlen(text);
    printf("The number of characters in the text is %i\n", length);
    for (int i = 0; i < length; i++)
    if (isalpha(text[i]))
    {  
        if (isupper(text[i]))
        {  
            counter++;
        }
        else if (islower(text[i]))
        {
            small++;
        }
        
        
    }
    printf("the number of  capital letters of the text is %i\n", counter);
    printf("the number of small letters of the text is %i\n", small);
        
}

