//cc -std=c99 -Wall -Werror -pedantic -o 17q1 17q1.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char **makeSentences(char *chapter, int *nSentences)
{
  *nSentences = 0         //no. sentences
  int initSize = 2;       //initial size
  char **aray = calloc(initSize, sizeof(char*));  //pointer to pointer, allocate space

  if(array == NULL) return NULL;      //error case

  char *sentences = strdup(chapter);  //pointer to sentences = duplication of chapter
  sentences = strtok(sentences, "."); //sentences seperated by str tok

  do
  {
    array[(*nSentences)++] = strdup(sentences); //itterate through sentences, take the strtok and add to "array"
    if(*nSentences == initSize)
    {
      initSize *= initSize;
      if((array = realloc(array, sizeof(char*)*initSize)) == NULL) return NULL; //error case array
    }
  }
  while((sentences = strtok(NULL, ".")) != NULL); // while not equal to null

  return array;
}
