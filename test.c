#include <stdio.h>

void main() {
    printf("Hello, dear world!");
    int k;
    scanf("%d", &k);
    int result = product(k, k);
    printf("Square of your number: %d", result);
    return;
}

int sum(int a, int b) {
	return a + b;
}

int product(int a, int b) {
	return a * b;
}