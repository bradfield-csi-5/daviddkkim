#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main() {
  char s1[] = "hello";
  char s2[] = "he";
  squeeze(s1, s2);

  printf("%s\n", s1);
}

void squeeze(char s1[], char s2[]) {
  int i, j, z;
  // char s3[] = "";
  for (i = j = 0; s1[i] != '\0'; i++) {
    for (z = 0; s2[z] != '\0'; z++) {
      // printf("%c\n", s1[i]);
      // printf("%c\n", s2[z]);
      if (s1[i] == s2[z]) {
        s1[j++] = s1[i];
        // s3[i] = s1[i];
      }
    }
  }
  s1[j] = '\0';

  return;
}
