#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(void)
{   
    char buffer[1000];
    printf("Text: ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    int letters = 0;
    int words = 1;
    int sentences = 0; 
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (isalpha(buffer[i]))
        {
            letters++;
        }
        if (buffer[i] == ' ')
        {
            words++;
        }
        if (buffer[i] == '.' || buffer[i] == '!' || buffer[i] == '?')
        {
            sentences++;
        }
    }
    printf("letters: %i\n", letters);
    printf("words: %i\n", words);
    printf("sentences: %i\n", sentences);

        
    


}