#include <stdio.h>
/* copy input to output; 1st version  */

int main() {

  long count;
  int c;
  count = 0;
  c = getchar();
  while (c != EOF) {
    ++count;
    c = getchar();
  }
  printf("%ld\n", count);
  return 0;
}
