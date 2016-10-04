#include <stdio.h>

int getSmallestFactor(int a) {
	int i = 2;
	while (i * i <= a) {
		if (a % i == 0) {
			return i;
		}
		i++;
	}

	return 0;
}

int main() {
	int n, smallestFactor;

	printf ("n: ");
	scanf("%d", &n);
	printf("%d = ", n);	

	smallestFactor = getSmallestFactor(n);
	while (smallestFactor != 0) {
		printf("%d * ", smallestFactor);
		n /= smallestFactor;
		smallestFactor = getSmallestFactor(n);
	}
	printf("%d\n", n);

	return 0;
}
