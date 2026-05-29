#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    printf("Enter your text: ");
    fflush(stdout);
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    int length = strlen(name);
    printf("the length of your word is %i\n", length); 
}

