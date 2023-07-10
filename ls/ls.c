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
  struct dirent *dp;
  DIR *dfd;
  struct stat stbuf;

  if (argc == 1) {
    printf("No arg");
    return 1;
  } else if (argc == 2) {
    dfd = opendir(".");
    while ((dp = readdir(dfd))) {
      filename = dp->d_name;
      stat(filename, &stbuf);
      printf("%lld %s\n", stbuf.st_size, filename);
    }
    return 0;
  } else if (argc > 2) {
    dfd = opendir(argv[2]);
    while ((dp = readdir(dfd))) {
      filename = dp->d_name;
      stat(filename, &stbuf);
      printf("%lld %s\n", stbuf.st_size, filename);
    }
    return 0;
  }
  // printf("%d", dfd->)
}
