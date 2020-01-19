#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner();

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    //iterates through each candidate and assigns the element of each
    //with the name from argv[i + 1] and sets all candidate.votes to 0
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    //asks the user for the number of voters
    int voter_count = get_int("Number of voters: ");

    //prints some dashes
    printf("%i people are voting\n", voter_count);
    printf("----------\n");

    // Iterates over each voter and asks them who they vote for.
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // calls the function, albiet inversely
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }

    }

    //prints some dashes and then the vote count for each candidate
    //printf("----------\n");
    //for (int i = 0; i < candidate_count; i++)
    //{
    //    printf("%s has %i votes\n", candidates[i].name, candidates[i].votes);
    //}

    // Display winner of election
    print_winner();
}



// Update vote totals given a new vote
bool vote(string name)
{
    // bad vote already returns 1
    //iterate over the list of names
    bool tally;
    for (int i = 0; i < candidate_count; i++)
    {
        //if the vote is cast for someone on the list, return true
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes ++;
            tally = true;
        }


    }
    return tally;
}


// Print the winner (or winners) of the election
void print_winner(void)
{
    //creates an int as a placeholder for the winning vote count
    int winner = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > winner)
        {
            winner = candidates[i].votes;
        }

    }

    //iterates over the set of candidates and matches winning votes to winner name
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == winner)
        {
            //prints the name of the winning candidate
            printf("%s\n", candidates[i].name);
        }
    }
    return;
}

