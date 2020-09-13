#include<stdio.h>
void tri() {
	printf("Enter Number : ");
	int x;
	float a, b;
	scanf_s("%d", &x);
	a = 0.5;
	b = (x * 2) - 1;
	printf("Area = %.2f\n", a * b * b);
	for (int i = 1; i <= x; i++) {
		for (int j = x; j >= i; j--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int j = 2; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 2; i <= x; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = x; j >= i; j--) {
			printf("*");
		}
		for (int j = x - 1; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
}
int main() {
	printf("* * * * * * * * * KITE* * * * * * * * *\n");
	tri();
	printf("\n");
	printf("* * * * * * * * * * * * * * * * * * * *");
	return 0;
}