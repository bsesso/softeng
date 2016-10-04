#include <stdio.h>

unsigned long long fact(int n) {
	if (n < 0)
		return 0;

	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}

int main () {
	int n;

	printf("n: ");
	scanf("%d", &n);
	printf("%d! = %llu\n", n, fact(n));		

	return 0;
}
