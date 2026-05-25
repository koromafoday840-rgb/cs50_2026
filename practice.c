#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{  

char text[1000];
printf("Text: ");
fflush(stdout);
fgets(text, sizeof(text), stdin);
printf("Your input was %s\n", text);
}