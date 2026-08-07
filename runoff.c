#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 8
#define max_voters 5

typedef struct
{
    char *name;
    int votes;
    bool eliminated;
}candidate;

bool vote(int voter, int rank, char *name);

candidate candidates[MAX];
int candidate_count;

int preferences[max_voters][MAX];

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("No candidate name has been entered");
        return 1;
    }
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("The limited number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[ i + 1];
        candidates[i].votes = 0;
     }
}    
// The vote function validates and records the choices of the voters.
    bool vote(int voter, int rank, char *name)
    {
        for (int i = 0; i < candidate_count; i++)
        {
            if (strcmp(candidates[i].name, name) == 0)
            {
                preferences[voter][rank] = i;
                return true;
            }
        } 
            
            printf("Invalid vote.");
            return false;
        
    }

        
        
       
        
    
                
            
        
    
