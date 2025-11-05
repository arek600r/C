#include <stdio.h>

int scrabble(char[]);
int length(char word[]);
int count_points(char play);
int change_to_upper(char play[]);
void check_score(int, int);

int main(){

    char player1[99];
    char player2[99];

    scanf("%s", &player1);
    scanf("%s", &player2);

    printf("Word player 1: %s\n", player1);
    printf("Word player 2: %s\n", player2);

    int score1 = scrabble(player1);
    int score2 = scrabble(player2);

    printf("Score of player 1: %d\n", score1 );
    printf("Score of player 2: %d\n", score2 );
    
    check_score(score1, score2);

    return 0;
}


void check_score(int scor1, int scor2)
{
    if (scor1 > scor2)
    {
        printf("Player1 WON!\n");
    }
    else if (scor1 < scor2)
    {
        printf("Player2 WON!\n");
    }
    else
    {
        printf("DRAW!\n");
    }
}





int scrabble(char play[]){

    int len = length(play);
    int sum = 0;
    int num = 0;
    while(play[num] != '\0')
    {
        if (play[num] >= 'a' && play[num] <= 'z')
        {
            play[num] = play[num] - 'a' + 'A';
        }
        num++;
    }

    for (int i = 0; i < len; i++)
    {
        sum += count_points(play[i]);
    }
    return sum;

}



int length(char word[]){
    int num = 0;

    while(word[num] != '\0'){
        num++;
    }

    return num;
}

int count_points(char play)
{   int sum = 0;
    if (play == 'A' || play == 'D' || play == 'E' || play == 'I' ||
        play == 'L' || play == 'N' || play == 'O' || play == 'R' ||
        play == 'S' || play == 'T' || play == 'U')
        {
            sum += 1;
        }
    else if( play  == 'B' || play == 'C' || play == 'M' || play == 'P' )
        {
            sum += 3;
        }
    else if (play == 'D' || play == 'G') 
        {
            sum += 2;
        }
    else if (play == 'F' || play == 'H' || play == 'V' || play == 'W' || play == 'Y')
        {
            sum += 4;
        }
    else if (play == 'J' ||  play == 'X')
        {
            sum += 8;
        }
    else if (play == 'K')
        {
            sum += 5;
        }
    else if (play == 'Q' || play == 'Z')
        {
            sum += 10;
        }
    else
        {   
            sum += 0;    
        }

    return sum;
}