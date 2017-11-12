#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h> //wtf
#include <sys/param.h>  //wtf
#include <dirent.h> //wtf
#include <string.h>

static void countEntries(char *dirname, int *nFiles, int *nDirs)
{
  char fullpath[MAXPATHLEN];
  DIR * dirp;
  struct dirent * dp;
  dirp = opendir(dirname);
  if (dirp == NULL)
  {
    perror("ERROR");
    return;
  }

  while ((dp = deaddir(dirp)) != NULL)
  {
    struct stat stat_buffer;
    struct stat *pointer = &stat_buffer;

    if(strcmp(dp->d_name, ".") == 0 || strcmp(dp->d_name, "..") == 0) continue;

    sprintf(fullpath, "%s/%s", dirname, dp->d_name);
    if(stat(fullpath, pointer) != 0)
    {
      perror("ERROR");
    }
    else if(S_ISDIR(pointer->st_mode))
    {
      (*nDirs)++;
      countEntries(fullpath, nFiles, nDirs);
    }
    else if(S_ISREG(pointer->st_mode))
    {
      (*nFiles)++;
    }
  }

}
