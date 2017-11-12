/**
The function receives two arrays of characters, named set1 and set2, whose lengths are provided by parameters len1 and len2, respectively.

All elements of set1 are guaranteed to be unique, but are not necessarily sorted. The same is also true of the elements of set2.

There is no requirement that len1 and len2 have the same value.

The goal of the function is to determine if set2 is a non-empty subset of set1.

Write the function isSubset() in C99.
**/

//cc -std=c99 -Wall -Werror -pedantic -o 17q1 17q1.c

#include <stdio.h>
#include <stdbool.h>

bool isSubset(char set1[], int len1, char set2[], int len2)
{
//  char match[] = "no";
//  char nextchar;
//  int firstmatch = 0;
  int matchlen = 0;

  for (int b = 0; b < len2; b++)
  {
    for (int a = 0; a < len1; a++)
    {
      if (set2[b] == set2[a])
      {
        matchlen++;
        break;
      }
    }
  }
  printf("You got a string match dirty dog \n");
  if (matchlen == len2){printf("1"); return 1;}
  else{return 0;}
}

int main(int argc, char *argv[])
  {
    isSubset(argv[1], *argv[2], argv[3], *argv[4]);
  }


/**
go through set2
take a char and compare to all char in set 1
if there's a match
increment matchlen and terminate

you need a way to ensure there is consecutive matches.
**/
