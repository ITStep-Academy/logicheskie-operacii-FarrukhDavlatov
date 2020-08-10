
#include <stdio.h>
#include <stdbool.h>

int main () {
	
	int a, b, c;
	
	printf("Write 3 numbers:");
	scanf("%d", &a);
	scanf("%d", &a);
	scanf("%d", &a);
	
	printf("%d", (a % 5 == 0 && b % 5 != 0 && c % 5 != 0) || (a % 5 != 0 && b % 5 == 0 && c % 5 != 0) || (a % 5 != 0 && b % 5 != 0 && c % 5 == 0));
	
	return 0;
}
