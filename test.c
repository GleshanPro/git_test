#include <stdio.h>

int main() {
    printf("Hello, dear world!");
    int k;
    scanf("%d", &k);
    int result = product(k, k);
    printf("Square of your number: %d", k);
    return 0;
}

int sum(int a, int b) {
	return a + b;
}

int product(int a, int b) {
	return a * b;
}