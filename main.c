#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int fib(int n);
unsigned long long fib2(int n, unsigned long long *fibs);

int main(int argc, char **argv) {

	if (argc > 1) { // check for argument of which number in sequence to find

		// sequence number to find
		int count = atoi(argv[1]);
		// allocate "count" ulls
		unsigned long long *fibs = (unsigned long long *) calloc(count + 1, sizeof(unsigned long long)); 
		// print result
		printf("%llu\n", fib2(count, fibs));
		// free fibs from memory
		free(fibs);
	}
	else { // default case, find 0th number in sequence
		
		// allocate 10 ulls
		unsigned long long *fibs = (unsigned long long *) calloc(1, sizeof(unsigned long long)); 
		// print result
		printf("%llu\n", fib2(0, fibs));
		// free fibs from memory
		free(fibs);
	}
	return 0;
}

/*
 * 0 1 1 2 3 5 8 13
 */

//return nth item in the fibonacci sequence
int fib(int n) {

	if (n <= 2) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

//return nth item in the fibonnacci sequence, using dynamic programming
unsigned long long fib2(int n, unsigned long long *fibs) {
	
	//set initial values
	fibs[0] = 0;
	fibs[1] = 1;
	if (n < 2) { // edge case for low index
		return fibs[n];
	}

	int i;
	for (i = 2; i <= n; i++) {
		fibs[i] = fibs[i-1] + fibs[i-2]; // generate next fib value
	}

	//return result
	return fibs[n];
}

