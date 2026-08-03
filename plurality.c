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
    int votes;
}candidate;
candidate candidates[MAX];
int candidate_count;
int main(int argc, char *argv[])
{
    
    if (argc < 2)
    {
        printf("Usage: plurality[candidate..]\n");
        return 1;
    }
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("The maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }
    char buffer[10];
    printf("Enter the number of voters: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0';
    }
    int voter_count = atoi(buffer);
    for (int i =0; i < voter_count; i++)
    {
        char name_buffer[50];
        printf("Vote: ");
        if (fgets(name_buffer, sizeof(name_buffer), stdin) != NULL)
        {
            name_buffer[strcspn(name_buffer, "\n")] = '\0';
        }
        if (!vote(name_buffer))
        {
            printf("Invalid vote");
        }
    }
    print_winner();
    return 0;
}    
    bool vote(char *name)
    {
        for (int i = 0; i < candidate_count; i++)
        {
            if (strcmp(candidates[i].name, name) == 0)
            {
                candidates[i].votes++;
                return true;
            }
        }
        return false;
    }
    void print_winner(void)
    {
        int max_votes = 0; 
        for (int i = 0; i < candidate_count; i++)
        {
            if (candidates[i].votes > max_votes)
            {   
                max_votes = candidates[i].votes;
            }
        }
        if (max_votes > 0)
        {  
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {
            printf("The winner of the election is %s\n", candidates[i].name);
        }
    }
}

    else
    {
        printf("No valid vote cast.\n");
    }
        
}








    




