#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int num = 0;

	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num <= 1)
		printf("It is not a prime number.");
	else {
		int a = num;
		while (1) {
			a--;
			if (a == 1) {
				printf("It is a prime number.");
				break;
			}
			if (num % a == 0) {
				printf("It is not a prime number.");
				break;
			}
		}
	}
	return 0;
}