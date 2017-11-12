#include <stdlib.h>
#include <string.h>

//This solution uses builtin

char *makeChapter(char **sentences, int nSentences);
{
  char *chapter = calloc(1, sizeof(char));
  if(chapter == NULL) {return NULL;}
  for (int i = 0; i < nsentences; ++i)
  {
    char *newsentence = sentences[i]++;
    chapter = realloc(chapter, (strlen(chapter) + strlen(newsentence) + 2) * sizeof(char) );

    if(chapter == NULL){return NULL;}

    sprintf(chapter, "%s %s", chapter, newsentence);
  }
  return chapter;
}
