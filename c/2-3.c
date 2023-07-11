#include <ctype.h>
#include <stdio.h>

int htoi(char s[]);

int main() {
  int output;
  output = htoi("0x2345");

  printf("%d\n", output);
}

int htoi(char s[]) {
  int i, total, isHex = 1;
  i = 0;

  if (s[i] == '0') {
    i++;
    if (s[i] == 'x' || s[i] == 'X') {
      i++;
    }
  }
  total = 0;
  for (; isHex == 1; i++) {
    if (isdigit(s[i])) {
      if (s[i] >= '0' && s[i] <= '9') {
        total = 16 * total + (s[i] - '0');
      } else
        isHex = 0;
    } else {
      char c = tolower(s[i]);
      if (c >= 'a' && c <= 'f') {
        total = 16 * total + (s[i] - 'a' + 10);
      } else
        isHex = 0;
    }
  }
  return total;
}
