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

void tabulate(void);

bool print_winner(void);

int find_min(void);

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
        candidates[i].eliminated = false;
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
    
    void tabulate(void)
    {
        for (int k = 0; k < candidate_count; k++)
        {    
            candidates[k].votes = 0;
        }
        for (int i = 0; i < max_voters; i++)
        {
            for (int j = 0; j < candidate_count; j++)
            {
                int candidate_index = preferences[i][j];
                if (candidates[candidate_index].eliminated == false)
                {
                    candidates[candidate_index].votes++;
                    break;
                }


            }
        }
    }

    bool print_winner()
    {
        for (int i = 0; i < candidate_count; i++)
            {
                if (candidates[i].votes > max_voters / 2 )
                {
                    if (candidates[i].eliminated == false)
                    {  
                        printf("%s", candidates[i].name);
                        return true;
                    }
                }
            }
            return false;   
     }
    int find_min()
    {
        int least_votes = 0;
        for (int i = 0; i < candidate_count; i++)
        {
            if (candidates[i].eliminated == false)
            {
                if (candidates[i].votes < least_votes)
                {
                    least_votes = candidates[i].votes;
                }

            }
        }
        
    }
    