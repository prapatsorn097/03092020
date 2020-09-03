#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, space;
	int k, row;
	printf("Enter the number of rows you want:");
	scanf("%d", &row);
	for (i = 1; i <= row; i++) {
		for (space = 1; space <= row - i; space++) {
			printf(" ");
		}
		for (k = 1; k <= (2 * i) - 1; k++) {
			printf("*");
		}
		printf("\n");

	}


}

