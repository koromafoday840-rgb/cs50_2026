#include <stdio.h>
#include <string.h>

int main(void)
{  

char text[] = "Hello, world!";
int length = strlen(text);
printf("The text is %i characters long \n\n", length);
for(int i = 0; i < length; i++)
{  
    char symbol = text[i];
    printf("Character at index %i is: %c\n", i, symbol);
}
}
