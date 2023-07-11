#include <stdio.h>
#include <string.h>
/* copy input to output; 1st version  */

int main() {

  int c;
  int previousC;
  char output[1000] = "";

  while ((c = getchar()) != EOF) {
    if (output[strlen(output) - 1] == ' ') {
      if (c != ' ') {
        output[strlen(output)] = c;
      }
    } else
      output[strlen(output)] = c;
  }
  printf("%s\n", output);

  return 0;
}
