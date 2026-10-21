#include <stdio.h>

int main() {
	int i, n, j;
	
	for (j = 0; j <= 5; j++) {
		printf("Enter a number: ");
		scanf("%d", &n);
	
		for(i = 2; i <= (n - 1); i++) {
			if ((n % i) == 0) {
				printf("%d is not prime!", n);
				break;
			} else {
				continue;
			}
		}
	
		if (i == n) {
			printf("%d is prime!", n);
		}
	}
}