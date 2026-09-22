#include <stdio.h>

int main(void) {
	int a, b;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	if (a == b) {
		printf("%d is equal to %d", a, b);
	} else if (a > b) {
		printf("%d is greater than %d", a, b);
	} else {
		printf("%d is greater than %d", b, a);
	}
	
	return 0;
}