#include <stdio.h>

int main() {
	int input = 0, calcdNum = 0, extDig, inputRef;
	
	printf("Enter a three digit number:");
	scanf("%d", &input);
	
	inputRef = input;
	
	do {
		extDig = input % 10;
		input = input / 10;
		
		calcdNum += (extDig * extDig * extDig);
	} while (input != 0);
	
	if (calcdNum == inputRef) printf("%d is an Armstrong number", inputRef);
	else printf("%d isn't an Armstrong number", inputRef);
}