#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, n, m;
	int a[9][9];
	scanf("%d %d", &n, &m);
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			a[i][j] = i*j;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			printf("%2d", a[i][j]);
		}

		printf("\n");
	}
	return 0;
}