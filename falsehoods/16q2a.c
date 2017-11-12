//cc -std=c99 -Wall -Werror -pedantic -o 17q1 17q1.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define HUGE = 9000; //max chapter size
#define SLEN = 1000; //max line size

int nSentences()

char **makeSentences(char *chapter, int *nSentences)
{
    char *ptr = chapter;
    int numSentences = 0;

    char **sentences = malloc(sizeof(char*));

    while(*ptr != '\0')
    {
      sentences = realloc(sentences, (numSentences + 1) * sizof(char*));

      sizeof(char*));
      int sentenceLength = 0;

      char thisline[BUFSIZ];

      while(*ptr != '.')
      {
        thisLine[sentenceLength] = *ptr;
        sentenceLength++;
        ptr++;
      }
    }

    char *copy = malloc(strlen)



}

int main(int argc, char argv[])
{
  int strlen =

  printf("Enter yo string boy: \n");
  get(str);
  printf("%s", eachs);

}

/**

Consider that chapter will be a vector of sentences - chapter[0] will point to the first sentence,
chapter[1] to the second....

You'll need to allocate/extend the space for chapter each time you find a new sentences, and then make the
newly allocated element of chapter point to a copy of the recently found sentence.

Your approach seems too complicated - 2 mallocs and 2 reallocs; you may find it simpler with 1 realloc and
1 strdup.

**/
