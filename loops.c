#include <stdio.h>

int main(void) {
	for (int f = 0; f <= 10; f++) {
		printf("[for loop] Hello %d time(s).\n", i);
	}
	
	printf("\n");
	
	int w = 0;
	while (w <= 10) {
		printf("[while loop] Hello %d time(s).\n", w);
		w++;
	}
	
	printf("\n");
	
	int dw = 0;
	do {
		printf("[do while loop] Hello %d time(s).\n", i);
		dw++;
	} while (dw <= 10)
	
	return 0;
}