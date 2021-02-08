#include <stdio.h>

int fibo(int n) {
	int a, b, c;
	a = 0;
	b = 1;
	if (n == 1) {
		return 0;

	}
	else if (n == 2) {
		return 1;
	}else if (n >= 3) {
		for (int i = 0; i < n - 2; i++) {
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;


}

int main(void) {
	
	
	printf("%d",fibo(10));

}
