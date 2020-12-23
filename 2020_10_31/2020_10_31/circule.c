#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int n = 0;
//	while (n < 100)
//	{
//		printf("代码加一行\n");
//	}printf("好offer");
//	return 0;
//}
#include <stdio.h>
int main()
{	
	int a = 1;
	while (a <= 100)
	{
		if (a%2==1)
			printf("%d\n",a);
		a++;
	}
	return 0;
}