#include <stdio.h>

int strlen_new(char *s);

int main() {

  char s[] = "hello";

  int len = strlen_new(s);
  printf("%d", len);
}

int strlen_new(char *s) {
  char *p = s; // Assign p to first position of S.

  while (*p != '\0') {
    p++;
  }

  return p - s;
}
