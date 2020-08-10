
#include <stdio.h>
#include <stdbool.h>

int main () {
	
	float a, b, c, d, result;
	
	printf("Write 2 numbers:");
	scanf("%f%f", &a, &b);
	
	printf("Write 2 numbers:");
	scanf("%f%f", &c, &d);

	printf("%d", a / b > c / d);	  
	
	return 0;
}
