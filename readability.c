#include <stdio.h>
#include <string.h>

int main(void)
{
    char *name = "Foday";
    int length = strlen(name);
    for (int i = 0; i < length; i++)
    {
        printf("%i = %c\n", i, name[i]);
    }
}