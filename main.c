#include <stdio.h>

int main(void) {
  int a;
  printf("Enter you cgpa: ");
  scanf("%d", &a);
  
  switch (a) {
    case 10:
    case 9:
    case 8: {
      printf("\nHons");
      break;
    };
    case 7: {
      printf("\nFirst");
      break;
    }
    case 6: {
      printf("\nSecond");
      break;
    }
    case 5: {
      printf("\nThird");
      break;
    }
    
    default: {
      printf("\nFailed");
      break;
    }
  }
}