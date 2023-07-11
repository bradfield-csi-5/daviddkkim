#include <stdio.h>
/* copy input to output; 1st version  */

int main() {
  int count = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t')
      ++count;
  }

  printf("%d\n", count);
  return 0;
}
