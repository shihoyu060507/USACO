#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	int mul5 = 0;	
	int mul25 = 0;	
	int mul125 = 0;

	scanf("%d", &N);

	mul5 = N / 5;
	mul25 = N / 25;
	mul125 = N / 125;

	printf("%d", mul5 + mul25 + mul125);

	return 0;
}
