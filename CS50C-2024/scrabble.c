#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int POINTS[26] = {3, 7, 2, 5, 8, 1, 4, 6, 9, 2, 4, 6, 1, 8, 3, 7, 9, 5, 4, 2, 7, 6, 8, 3, 9, 1};
int computed_score(string score);

//take input of two players
int main(void)
{
    string player1 = get_string("Player1: ");
    string player2 = get_string("Player2: ");

   int score1 = computed_score(player1);
   int score2 = computed_score(player2);

   if (score1 > score2)
   {
      printf("player1 Wins! :) ");
   }
   else if (score1 < score2)
   {
    printf("Player2 Wins! :)");
   }
   else
   {
    printf("Its A TIE :0 !");
   }

printf("\n");

}
//Calculate the score
int computed_score(string word)
{
    int scorecount = 0;

    for (int i = 0, len = strlen(word); i < len; i++ )
    { 
       if (isupper(word[i]))
       {
        scorecount += POINTS[word[i] - 'A'];
       } 
       else if (islower(word[i]))
       {
        scorecount += POINTS[word[i] - 'a'];
       }
    }
    return scorecount;

}
//print out the winner