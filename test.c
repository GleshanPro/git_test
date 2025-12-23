#include <stdio.h>

int main() {
    printf("Hello, dear world!");
    int n;
    scanf("%d", &n);
    int result = product(n, n);
    printf("Square of your number: %d", n);
    return 0;
}

int sum(int a, int b) {
	return a + b;
}

int product(int a, int b) {
	return a * b;
}