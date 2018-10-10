#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
		for (i = 0; i < 9; i++)
		{
			printf("*");
			if (i == 0 || i == 8)
			{
				for (j = 0; j < 7; j++)
					printf("*");
			}
			if (i > 0 && i < 8)
			{
				for (j = 0; j < 7; j++)
					printf(" ");
			}
			printf("*\n");
		}
	printf("\n");
		for (i = 0; i < 9; i++)
		{
			if (i == 0 || i == 8)
			{
				for (j = 0; j < 3; j++)
					printf(" ");
				for (j = 0; j < 3; j++)
					printf("*");
			}
			if (i == 1 || i == 7)
			{
				printf(" *");
				for (j = 0; j < 5; j++)
					printf(" ");
				printf("*");
			}
			if (i > 1 && i < 7)
			{
				printf("*");
				for (j = 0; j < 7; j++)
					printf(" ");
				printf("*");
			}
			printf("\n");
		}
	printf("\n");
		for (i = 0; i < 9; i++)
		{
			if (i == 0)
			{
				for (j = 0; j < 4; j++)
					printf(" ");
				printf("*");
			}
			if (i == 1)
			{
				for (j = 0; j < 3; j++)
					printf(" ");
				for (j = 0; j < 3; j++)
					printf("*");
			}
			if (i == 2)
			{
				for (j = 0; j < 2; j++)
					printf(" ");
				for (j = 0; j < 5; j++)
					printf("*");
			}
			if (i > 2 && i < 9)
			{
				for (j = 0; j < 4; j++)
					printf(" ");
				printf("*");
			}
			printf("\n");
		}
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		if (i == 0 || i==8)
		{
			for (j = 0; j < 4; j++)
				printf(" ");
			printf("*");
		}
		if (i == 1 || i == 7)
		{
			for (j = 0; j < 3; j++)
				printf(" ");
			printf("* *");
		}
		if (i == 2 || i == 6)
		{
			for (j = 0; j < 2; j++)
				printf(" ");
			printf("*");
			for (j = 0; j < 3; j++)
				printf(" ");
			printf("*");
		}
		if (i == 3 || i == 5)
		{
			printf(" *");
			for (j = 0; j < 5; j++)
				printf(" ");
			printf("*");
		}
		if (i == 4)
		{
			printf("*");
			for (j = 0; j < 7; j++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}