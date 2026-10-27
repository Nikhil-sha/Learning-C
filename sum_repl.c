#include <stdio.h>

int main() {
  int input, sum = 0;
  
  do {
    printf("Enter a number to add OR Enter 0 to exit\n");
    scanf("%d", &input);
    sum = sum + input;
  } while (input != 0);
  
  if (sum != 0) printf("The total sum is: %d", sum);
  return 1;
}