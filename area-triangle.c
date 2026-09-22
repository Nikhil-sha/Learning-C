#include <stdio.h>

int main(void) {
	int b, h, area;
	
	printf("Enter the base and height of the triangle or rectangle respectively: ");
	scanf("%d", &b, &h);
	
	area = b * h;
	printf("The area of the shape is %d unit(s)", area);
	
	return 0;
}