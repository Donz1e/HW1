#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 9; j++)
				printf("P");
		}
		if (i > 0 && i < 4)
		{
			for (j = 0; j < 4; j++)
				printf(" ");
			printf("P");
			for (j = 0; j < 3; j++)
				printf(" ");
			printf("P");
		}
		if (i == 4)
		{
			for (j = 0; j < 5; j++)
				printf(" ");
			printf("P P");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 2; j++)
				printf(" ");
			for (j = 0; j < 2; j++)
				printf("J");
		}
		if (i ==1 || i == 3)
			printf(" J");
		if (i == 2)
			printf("J");
		if (i == 4)
		{
			for (j = 0; j < 2; j++)
				printf(" ");
			for (j = 0; j < 7; j++)
				printf("J");
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < 9; j++)
				printf("D");
		}
		if (i == 1 || i == 2)
		{
			printf("D");
			for (j = 0; j < 7; j++)
				printf(" ");
			printf("D");
		}
		if (i == 3)
		{
			printf(" D");
			for (j = 0; j < 5; j++)
				printf(" ");
			printf("D");
		}
		if (i == 4)
		{
			for (j = 0; j < 2; j++)
				printf(" ");
			for (j = 0; j < 5; j++)
				printf("D");
			for (j = 0; j < 2; j++)
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}