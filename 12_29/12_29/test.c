#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int i, k=0;
//	int arr1[15], arr2[15], arr3[16] = { 0 };
//	for (i = 0; i < 15; i++)
//	{
//		scanf("%1d", &arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 15; i++)
//	{
//		scanf("%1d", &arr2[i]);
//	}
//	for (i = 14; i >= 0; i--)
//	{
//		if (arr1[i] + arr2[i] + k >= 10)
//		{
//			arr3[i + 1] = arr1[i] + arr2[i] + k - 10;
//			k = 1;
//			arr3[i] = 1;
//		}
//		else
//		{
//			arr3[i + 1] = arr1[i] + arr2[i] + k;
//			k = 0;
//		}
//	}
//	if (arr3[0] == 0)
//	for (i = 1; i < 16; i++)
//	{
//		printf("%d", arr3[i]);
//	}
//	else
//	for (i = 0; i < 16;i++)
//	{
//		printf("%d",arr3[i] );
//	}
//	
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int d=10000, p=1000;
//	double r=0.005, m;
//	scanf("%d,%d,%lf",&d,&p,&r);
//	m = log10(p / (p - d*r)) / log10(1 + r);
//	printf("%.2f",m);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926
//int main()
//{
//	float r, v;
//	scanf("%f",&r);
//	v = (4.0 / 3.0)*PI*pow(r, 3);
//	printf("%.2f",v);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch;
//	ch = getchar();
//	if (ch <= 'Z'&&ch >= 'A')
//		printf("capital letter");
//	else if (ch <= 'z'&&ch >= 'a')
//		printf("lower case letter");
//	else if (ch == ' ')
//		printf("blank space");
//	else if (ch <= '9'&&ch >= '0')
//		printf("digit");
//	else
//		printf("others");
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	printf("Please input two integers:");
//	scanf("%d,%d", &a, &b);
//	if (a > b)
//		printf("the first one is bigger than the second one");
//	else if (a == b)
//		printf("the first one is equal to the second one");
//	else
//		printf("the first one is less than the second one");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f",&a,&b,&c);
//	if (a + b > c&&a + c > b&&b + c > a)
//		printf("It is triangle.");
//	else
//		printf("It's not triangle.");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char b;
//	float a, c;
//	scanf("%f%c%f",&a,&b,&c);//1+3
//	switch (b)
//	{
//	case '+':
//		printf("%.6f+%.6f=%.6f", a, c, a + c);
//	case '-':
//		printf("%.6f-%.6f=%.6f", a, c, a - c);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//aabb
//	int a, b, i, c;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//		{
//			c = a * 1000 + a * 100 + b * 10 + b;
//			for (i = 31; i < 100;i++)
//			{
//				if (i*i == c)
//					printf("%d",c);
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	float c;
//	for (a = 1; a <20; a++)
//	{
//		for (b = 1; b < 33; b++)
//		{
//			c=100-a-b;
//				if (5 * a + 3 * b + c / 3 == 100)
//					printf("%d,%d,%d\n", a, b, c);
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i, j;
//	float k;
//	for (i = 1; i < 21; i++)
//	{
//		for (j = 1; j < 34; j++)
//		{
//			k = 100 - (i + j);
//			if (i * 5 + j * 3 + k / 3 == 100)
//				printf("%d,%d,%.0f\n", i, j, k);
//		}
//
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 10)
//		{
//			printf("%d",i*i);
//		}
//		else
//			printf("%d,",i*i);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#define pi 3.14
//int main()
//{
//	float x[5] = {0,pi/6,pi/4};
//	printf("%.6f\n", sin(0));
//	printf("%.6f\n", sin(x[2]));
//	printf("%.6f\n", sin(pi / 4));
//	printf("%.6f\n", sin(pi / 3));
//	printf("%.6f\n", sin(pi / 2));
//	return 0;
//}
#include<stdio.h>
int main()
{
	char ch1, ch2;
	ch1 = 'a';
	ch2 = '6';
	printf("%c,%d\n",ch1,ch1);
	printf("%c,%d", ch2, ch2);
	
	return 0;
}