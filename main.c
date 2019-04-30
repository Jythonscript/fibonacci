#include <stdio.h>
#include <stdlib.h>

int fib(int n);
int fib2(int n);

int main() {

	//printf("%d\n", fib(35));
	fib2(35);
	return 0;
}

/*
 * 1 1 2 3 5 8 13
 */

//return nth item in the fibonnacci sequence
int fib(int n) {

	if (n <= 2) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int fib2(int n) {
	
	//generate list of fib items that will be referenced multiple times
	int *fibs = malloc(sizeof(int) * n);
	printf("%ld\n%ld\n", sizeof(int), sizeof(&fibs));
	for (int i = 0; i < 40; i++) {
		printf("%d\t", fibs[i] - fibs[i] + i);
	}
	return 0;
}

