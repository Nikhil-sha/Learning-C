#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	
	printf("Enter your number: ");
	scanf("%d", &num);
	
	num = abs(num);
	printf("%d", num);
}