#include <stdio.h>

int main () {
	int n1, n2;

	printf("Enter an integer: ");
	scanf("%d", &n1);
	printf("\nEnter another integer: ");
	scanf("%d", &n2);

	printf("\nThe mean between %d and %d is %.1f\n", n1, n2, (n1 + n2) / 2.0);

	return 0;
}
