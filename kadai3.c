#include <stdio.h>
#include <string.h>
#define MAX 20

int main() {
	char name[MAX];

	printf ("Hello! What is your name?\n");
	fgets(name, MAX, stdin);
	printf("\nNice to meet you, %s\n", name);

	return 0;
}
