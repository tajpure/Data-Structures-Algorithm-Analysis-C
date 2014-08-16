#include <stdio.h>

int Fib(int N) {
	if (N <= 1) {
		return 1;
	} else {
		return Fib(N-1) + Fib(N -2 );
	}
}

long Fib_for(int n) {
	long odd = 1;
	long even = 1;
	long sum = 0;
	for (int i = 2; i <= n; i++) {
		sum = odd + even;
		if ((i+1) % 2 == 0) {
			even = sum;
		} else {
			odd = sum;
		}
	}

	return sum;
}

int main() {

    return 0;
}
