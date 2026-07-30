#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 9

bool vote(char *name);
void print_winner(void);

typedef struct
{
    char *name;
    int vote;
}candidate;
candidate candidates[MAX];
    int candidate_count;
bool vote(char *name);
void print_winner(void);
int main(int argc, char *argv[])
{
    
    if (argc < 2)
    {
        printf("Usage: plurality[candidate..]\n");
        return 1;
    }
    int candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("The maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].vote = 0;
    }
    int voter_count;

    printf("Enter the number of voters: ");
    fgets(int voter_count, sizeof(voter_count), stdin);






    

}



