#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
	int i;
	char arr[1000000];
	for (i = 0;;i++)
	{
		scanf("%c",&arr[i]);
		if (arr[i] == '\n')
			break;
	}
	printf("³É¹¦Ìø³ö\n");
	//int i, j, n, m;
	//scanf("%d",&n);
	//int arr[100] = { 0 };
	//for (i = 0; i < n; i++)
	//{
	//	for (j = i + 1; j < n; j++)
	//	{
	//		if (arr[i] < arr[j])
	//		{
	//			m = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = arr[i];
	//		}
	//	}
	//}
	return 0;
}