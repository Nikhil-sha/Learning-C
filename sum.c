#include <stdio.h>

int main(void) {
	int a, b, sum;
	
	printf("Enter two numbers to add: ");
	scanf("%d%d", &a, &b);
	
	sum = a + b;
	printf("The sum of the given numbers is %d", sum);
	
	return 0;
}