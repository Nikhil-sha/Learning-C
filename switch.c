#include <stdio.h>

int main(void) {
	int age;
	scanf("%d", &age);
	
	switch(age) {
		case (<18): {
			printf("Oh! You are not eligible for a D.L.");
			break;
		};
		
		case (>=18): {
			printf("Yay! You are eligible for a D.L.");
			break;
		}
	}
}