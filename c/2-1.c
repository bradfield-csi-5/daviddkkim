#include <float.h>
#include <limits.h>
#include <stdio.h>

// #undef  SHRT_MIN
// #undef  SHRT_MAX
// #undef  USHRT_MAX
// #undef  INT_MIN
// #undef  INT_MAX
// #undef  UINT_MAX
// #undef  LONG_MIN
// #undef  LONG_MAX
// #undef  ULONG_MAX

// #undef  CHAR_BIT
// #undef  CHAR_MIN
// #undef  CHAR_MAX
int main() {
  printf("Min signed char %d\n", SCHAR_MIN);
  printf("Max signed char %d\n", SCHAR_MAX);
  printf("MAX unsigned char %u\n", UCHAR_MAX);

  printf("Min signed short %d\n", SHRT_MIN);
  printf("Max signed short %d\n", SHRT_MAX);
  printf("Max unsigned short %u\n", USHRT_MAX);

  printf("Min signed Int %d\n", INT_MIN);
  printf("Max signed Int %d\n", INT_MAX);
  printf("Max unsigned Int %u\n", UINT_MAX);

  printf("Max signed Long %ld\n", LONG_MAX);
  printf("Max signed Long %ld\n", LONG_MIN);
  printf("Max unsigned Long %lu\n", ULONG_MAX);
}
