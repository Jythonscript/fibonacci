#include <stdio.h>
#include <stdlib.h>

int fib(int n);
int fib2(int n);

int main(int argc, char **argv) {

	//printf("%d\n", fib(35));
	if (argc > 1) {
		printf("%d\n", fib2(atoi(argv[1])));
	}
	else {
		printf("%d\n", fib2(10));
	}
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

//return nth item in the fibonnacci sequence, using dynamic programming
int fib2(int n) {
	
	//generate list of fib items that will be referenced multiple times
	int *fibs = (int *) calloc(n, sizeof(int)); // allocate n ints

	//set initial values
	fibs[0] = 0;
	fibs[1] = 1;
	if (n <= 2) { // edge case for low index
		return fibs[n-1];
	}

	int i;
	for (i = 2; i < n; i++) {
		fibs[i] = fibs[i-1] + fibs[i-2]; // generate next fib value
	}

	free(fibs); // free fibs from memory
	return fibs[n-1];
}

