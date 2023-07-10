#include <dirent.h>
#include <fcntl.h> /* flags for read and write */
#include <stdio.h>
#include <string.h>
#include <sys/dir.h>
#include <sys/stat.h> /* structure returned by stat */
#include <sys/types.h>

void fsize(char *);
void dirwalk(char *, void (*fcn)(char *));

#define MAX_PATH 1024

int main(int argc, char **argv) {
  char *filename;
  char *directory;
  struct dirent *dp;
  DIR *dfd;
  struct stat stbuf;
  int statResult;

  if (argc == 1) {
    directory = ".";
  }

  if (argc > 1) {
    directory = argv[1];
  }
  statResult = stat(directory, &stbuf);

  if (statResult == -1) {
    printf("Error occured from stat trying to read %s\n", directory);
    return 1;
  }
  if (!S_ISDIR(stbuf.st_mode)) {
    printf("%lld %s\n", stbuf.st_size, directory);
    return 1;
  }

  dfd = opendir(directory);
  while ((dp = readdir(dfd))) {
    filename = dp->d_name;
    printf("%us", stbuf.st_mode);
    printf("%lld %s\n", stbuf.st_size, filename);
  }
  return 0;

  // printf("%d", dfd->)
}
