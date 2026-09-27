#include <stdio.h>

int main(void) {
	int a, b, res;
	char op;
	printf("Enter (number)(operator)(number): ");
	scanf("%d%c%d", &a, &op, &b);
	switch(op) {
		case "+": {
			res = a + b;
			printf("the sum is %d", res);
			break;
		}
		case "-": {
			res = a - b;
			printf("the difference is %d", res);
			break;
		}
	}
}