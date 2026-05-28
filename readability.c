#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)
{   
    char buffer[1000];
    printf("Text: ");
    fflush(stdout);
    fgets(buffer, sizeof(buffer), stdin);
    int letters = 0;
    int words = 0;
    int sentences = 0; 
    if (strlen(buffer) > 0)
    {
        words = 1;
    }
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
         
        float L = ((float)letters/words) * 100;
        float S = ((float)sentences/words) * 100;
        float index = 0.0588 * L - 0.0296 * S - 15.8;
        int grade = round(index);
        if (grade < 1)
        {
            printf("Before Grade 1\n");
        }
        else if (grade > 16)
        {
            printf("Grade 16+\n");
        }
        else
        {     
            printf("Grade %i\n", grade);
        }
}