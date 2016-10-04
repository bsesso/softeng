#include <stdio.h>

int main () {
	int i = 1, fact = 1;
	double e = 1;

	while (i <= 10 - 1) {
		fact = fact * i;
		e += 1.0 / fact;

		i++;
	}
	
	printf("e = %lf\n", e);

	return 0;
}
