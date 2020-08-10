
#include <stdio.h>
#include <stdbool.h>

int main () {
	
	int a, b, c;
	
	printf("Write 1 numbers:");
	scanf("%d", &a);
	
	printf("%d", a < 0 && a >= -10 || a <= 15 && a > 2);
	
	return 0;
}
