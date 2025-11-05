#include <stdio.h>
#include <string.h>
#define MAX 9

typedef struct {
	char *name;
    int votes;
} candidate;

candidate candidates[MAX];
int candidate_count;

int vote(char name[]);
void print_winner(void);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i+1];
        candidates[i].votes = 0;
    }

    int voter_count;
    printf("Number of voters: ");
    scanf("%d", &voter_count);

    for (int i = 0; i < voter_count; i++)
    {
        char name[20];
        printf("Vote: ");
        scanf("%s", &name);

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }
    print_winner();
}

int vote(char name[])
{
    if (strcp(name))
}
void print_winner(void)
{

}