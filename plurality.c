#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 9

bool vote(char *name);
void print_winner(void);

typedef struct
{
    char *name;
    int vote;
}candidate;

int main(int argc, char *argv[])
{
    candidate candidates[MAX];
    int candidate_count;
    if (argc < 2)
    {
        printf("Usage: plurality[candidate..]\n");
        return 1;
    }
    for (int i = 0; i < candidate_count; i++)
    {  
    candidates[i].name = argv[i] + 1;
    int candidate_count = argc - 1;
    
    candidate_count = argc - 1;
    if(candidate_count > MAX)
    {
        printf("Maximum number of candidate is %i", MAX);
        return 2;
    }
    }




