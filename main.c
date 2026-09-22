#include <stdio.h>

int main(void) {
  float a;
  printf("Enter you cgpa: ");
  scanf("%f", &a);
  
  switch (a) {
    case 10:
    case 9:
    case 8: {
      printf("\nHons");
      break;
    };
    case 7: {
      printf("\nFirst");
    }
    case 6: {
      printf("\nSecond");
    }
    case 5: {
      printf("\nThird");
    }
    
    default: {
      printf("\nFailed");
    }
  }
}