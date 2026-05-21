#include <stdio.h>
#include <ctype.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *word);

int main(void)
{ 

char word1[100];
char word2[100];

printf("player 1: ");
scanf("%99s", word1);

printf("player 2: ");
scanf("%99s", word2);

int score1 = compute_score(word1);
int score2 = compute_score(word2);

if (score1 > score2)
{
    printf("player 1 wins!\n");
}

else if (score2 > score1)
{
    printf("player 2 wins!\n");
}

else
{
    printf("Tie!\n");
}
}

int compute_score(char *word)
{   
    int score = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {  
        if(isalpha(word[i]))
        {  
            if(isupper(word[i]))
            {
                int index = word[i] - 'A';
                score += POINTS[index];
            }
            else if (islower(word[i]))
            {
                int index = word[i] - 'a';
                score += POINTS[index];
            }
        }
    }
    return score;
}