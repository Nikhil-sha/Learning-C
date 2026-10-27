#include <stdio.h>
#include "ansi.h"

int main() {
  int input, sum = 0;
  
  do {
    printf(ANSI_FG_BLUE "Enter a number to add OR Enter 0 to exit\n" ANSI_RESET);
    scanf("%d", &input);
    sum = sum + input;
  } while (input != 0);
  
  if (sum != 0) printf(ANSI_FG_YELLOW "The total sum is: %d" ANSI_RESET, sum);
  return 1;
}