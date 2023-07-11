#include <stdio.h>

// oC=(5/9)(oF-32)
/*
1    -17
 20   -6
 40   4
 60   15
 80   26
 100  37
 120  48
 140  60
 160  71
 180  82
 200  93
 220  104
 240  115
 260  126
 280  137
 300  148
*/
/* print Fahrenheit-Celsius table
      for fahr = 0, 20, ..., 300 */
int main() {

  int fahr, celsius;
  int start, end, increment;

  start = 0;
  end = 300;
  increment = 20;

  fahr = start;

  while (fahr <= end) {
    // LEARNED: need to 5 * (fahr-32) first because in C, integer division
    // truncates and loses any fractional parts;
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + increment;
  }
  return 0;
}
