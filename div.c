#include <stdio.h>
int main() {
	int x, i;
	printf("\nInput an integer: ");
	scanf("%d", &x);
	printf("All the divisor of %d are: ", x);
	for(i = 1; i <= x; i++) {
		if((x%i) == 0){
			printf("\n%d", i);
			printf("\n");
		}
	}
	
	return 0;
}