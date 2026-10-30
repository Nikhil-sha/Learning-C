#include <stdio.h>

int main() {
  int input;
  printf("Enter a year: ");
  scanf("%d", &input);
  
  if ((input/100) != 0) {
    if ((input/400) == 0) {
      if ((input/4) == 0) {
        printf("It's a leap year!");
        return;
      }
    }
  }
  
  printf("It's not a leap year!");
  return 0;
}