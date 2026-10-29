#include <stdio.h>

int main() {
  int a, b, max;
  a = 100, b = 10;
  max = (a > b) ? a : b;
  printf("Max = %d\n", max);
  a = 10, b = 100;
  (a > b) ? (max = a) : (max = b);
  printf("Max = %d\n", max);
  a = 10, b = 10;
  (a > b) ? printf("Max = %d\n", a) : printf("Max = %d\n", b);
  a = 1, b = 200;
  printf("Largest = %d\n", (a > b) ? a : b);
  return 0;
}