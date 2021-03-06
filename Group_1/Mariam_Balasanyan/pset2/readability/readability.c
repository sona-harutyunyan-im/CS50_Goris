#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int letter = 0;
    int word = 1;
    int sentence = 0;

//count words
    for (int i = 0; i < strlen(text); i++)
    {
       if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
       {
         letter++;
       }
       else if (text[i] == ' ')
        {
          word++;
        }
       else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
       {
           sentence++;
       }
    }
    //printf("letters: %i; words: %i; sentences: %i\n", letter, word, sentence);
    float l = letter / word * 100;
    float s = sentence / word * 100;
    float grade = 0.0588 * l - 0.296 * s - 15.8;
    int gradei = round(grade);

    if (grade < 16 && grade >= 0)
    {
        printf("Grade %i\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

}
