#include <stdio.h>

void expand(char s1[], char s2[]);

int main() {
  char s1[] = "a-d";
  char s2[] = "";
  expand(s1, s2);
  printf("%s\n", s2);
}

void expand(char s1[], char s2[]) {
  int i, j;
  char c;
  printf("%s\n", s1);
  printf("%s\n", s2);

  for (i = j = 0; s1[i] != '\0'; i++) {
    // printf("%s\n", s2);
    if (s1[i] == '-' && s1[i + 1] >= c) {
      printf("here\n");
      i++;
      while (c < s1[i]) {
        s2[j++] = ++c;
      }
    } else {
      c = s1[i];
      printf("first: ");
      printf("%c\n", c);
      s2[j++] = c;
      printf("second : ");
      printf("%s\n", s2);
    }
  }
  s2[j] = '\0';
}
