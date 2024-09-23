#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n = 6;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
			printf(" ");
		for (int j = 0; j < 1 + 2 * (i- 1); j++)

			printf("*");
		printf("\n");
	}

}
