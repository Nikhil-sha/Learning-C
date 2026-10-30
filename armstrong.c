#include <stdio.h>

int power(int base, int expt) {
  int result = base;
  
  for (int i = 0; i < expt; i++) {
    result = result * base;
  }
  
  return result;
}

int main() {
	int input = 0, digits = 0, calcdNum = 0, extDig, inputRef;
	
	printf("Enter a three digit number:");
	scanf("%d", &input);
	
	inputRef = input;
	
	while (input != 0) {
	  input = input / 10;
	  digits++;
	}
	
	input = inputRef;
	
	while (input != 0) {
		extDig = input % 10;
		input = input / 10;
		
		calcdNum += power(extDig, digits);
	}
	
	if (calcdNum == inputRef) printf("%d is an Armstrong number", inputRef);
	else printf("%d isn't an Armstrong number", inputRef);
	
	return 0;
}