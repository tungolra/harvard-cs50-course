#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    printf(score1 > score2 ? "Player 1 Wins!" : score1 < score2 ? "Player 2 Wins!" : "It's a Tie!");
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    // set points variable to 0
    int points = 0;
    // for each letter in word, substract ASCII letter value from ASCII value 'A' or 'a' to map index of letter in POINTS
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        // ternary to add points depending if capital or lowercase
        isupper(word[i]) ? points += POINTS[word[i] - 'A'] : islower(word[i]) ? points += POINTS[word[i] - 'a'] : 0;
    }
    // return points after looping through letters
    return points;
}
