#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i, j, n, m;
//	int a[9][9];
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			a[i][j] = i*j;
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= m; j++)
//		{
//			printf("%2d", a[i][j]);
//		}
//
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[10][10] = {0};
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 0; i < 10;i++)
//	{
//		a[i][0] = 1;
//	}
//	for (i = 1; i < 10;i++)
//	{
//		for (j = i; j < 10; j++)
//		{
//			a[j][i] = a[j-1][i-1] + a[j-1][i];
//		}
//	}
//	for (i = 0; i < n;i++)
//	{
//		for (j = 0; j < n;j++)
//		{
//			if (a[i][j]!=0)
//				printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char i;
//	scanf("%c", &i);
//	if (i <= '9'&&i >= '1')
//		printf("digit");
//	else if(i <= 'Z'&&i >= 'A')
//		printf("capital letter");
//	else if(i <= 'z'&&i >= 'a')
//		printf("lower case letter");
//	else if(i == ' ')
//		printf("blank space");
//	else
//		printf("other");
//	return 0;
//}

//pT01_1
//#include <stdio.h>
//int main()
//{
//	printf("Programming in C is fun!");
//	return 0;
//}


//2
//#include <stdio.h>
//int main()
//{
//	int a, b, sum;
//	a = 123;
//	b = 456;
//	sum = a + b;
//	printf("sum=%d",sum);
//	return 0;
//}


//_3
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d,%d",&a,&b);
//	if (a > b)
//		printf("%d",a);
//	else 
//		printf("%d",b);
//	return 0;
//}

//pt02
//_1
//#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i < 11;i++)
//	{
//		if (i == 10)
//		{
//			printf("%d", i*i);
//			break;
//		}
//		printf("%d,",i*i);
//	}
//	return 0;
//}

//_02

//#include <stdio.h>
//#include <math.h>
//#define P 3.14
//int main()
//{
//	printf("%f\n", sin(0));
//	printf("%f\n", sin(P / 6));
//	printf("%f\n", sin(P / 4));
//	printf("%f\n", sin(P / 3));
//	printf("%f\n", sin(P / 2));
//	return 0;
//}

//_03
//#include <stdio.h>
//int main()
//{
//	char ch1,ch2;
//	ch1 = 'a';
//	ch2 = '6';
//	printf("%c,", ch1);
//	printf("%d\n",ch1);
//	printf("%c,", ch2);
//	printf("%d\n", ch2);
//	
//	return 0;
//}

//pt03

//01
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float p0 = 1000, r1 = 0.0414, r2 = 0.0468, r3 = 0.0540, r4 = 0.0585, r5 = 0.0072, p, q, w, e, r;
//	p = p0*(1 + 5 * r4);
//	q = p0*(1 + 2 * r2)*(1 + 3 * r3);
//	w = p0*(1 + 3 * r3)*(1 + 2 * r2);
//	e = p0*pow((1 + r1), 5);
//	r = p0*pow((1 + r5 / 4), 20);
//	printf("p = %.2f\np = %.2f\np = %.2f\np = %.2f\np = %.2f\n", p, q, w, e, r);
//	return 0;
//}


//02
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float p, r = 0.09;
//	int n = 10;
//	p = pow((1 + r), n);
//	printf("%.2f\n", p);
//	return 0;
//}


//08 02
//#include <stdio.h>
//int main()
//{
//	int arr[4][5] = { { 3, 9, 12, 28, 2 }, { 15, 5, 17, 7, 14 }, { 18, 25, 13, 19, 54 }, { 6, 10, 23, 26, 8 } };
//	int a, i, j,b=0;
//	scanf("%d", &a);
//	for (i = 0; i<4; i++)
//	{
//		for (j = 0; j<5; j++)
//		{
//			if (a == arr[i][j])
//			{
//				b=printf("%d %d\n", i, j);
//			}
//          if (b)
//			break;
//		}
//		
//	}
//	if (i == 4&&j == 5)
//		printf("not in the array");
//	return 0;
//
//}


//04

//#include <stdio.h>
//#include <math.h>
//#define PI 3.1415926
//int main()
//{
//	double r,v;
//	r = 3.4;
//	v = (4.0 / 3)*((PI)*pow(r, 3));
//	printf("%.2f",v);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a, b;
//	char ch;
//	scanf("%d%c%d=",&a,&ch,&b);
//	switch (ch)
//	{
//	case '+':
//		printf("%d", a + b); 
//		break;
//	case'-':
//		printf("%d",a-b);
//		break;
//	case '*':
//		printf("%d",a*b);
//		break;
//	case'/':
//		printf("%d",a/b);
//		break;
//	default:
//		printf("输入错误");
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int sum, i, n, j;
//	sum = 0;
//	scanf("%d",&n);
//	for (i = 2; i <= 2 * n;i+=2)
//	{
//		j = i - 1;
//		sum = pow(i, 3) + pow(j, 2) + sum;
//		
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int b = 0, c = 0, d = 0, e = 0, f = 0;
//	char ch;
//	while ((ch = getchar())!= '\n')  //212311324 \n
//	{
//		if (ch <= '9'&&ch >= '1')
//			b++;
//		else if (ch <= 'Z'&&ch >= 'A')
//			c++;
//		else if (ch <= 'z'&&ch >= 'a')
//			d++;
//		else if (ch == ' ')
//			e++;
//		else
//			f++;
//	}
//	printf("数字=%d\n大写=%d\n小写=%d\n空格=%d\n其他=%d\n", b, c, d, e, f);
//
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int b, c, d, e, f;
//	b = c = d = e = f = 0;
//	char ch;
//	for (; (ch = getchar()) != '\n';)
//	{
//		if (ch <= '9'&&ch >= '1')
//			b++;
//		else if (ch <= 'Z'&&ch >= 'A')
//			c++;
//		else if (ch <= 'z'&&ch >= 'a')
//			d++;
//		else if (ch == ' ')
//			e++;
//		else
//			f++;
//	}
//	printf("数字=%d\n大写=%d\n小写=%d\n空格=%d\n其他=%d\n", b, c, d, e, f);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	char arr[10] = {0};
//	gets(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}
#include<stdio.h>
void ascore_s(float *p)
{
	float sum = 0.0;
	int i, j;
	for (j = 0; j < 10; j++)
	{
		sum = 0.0;
		for (i = 0; i < 5; i++)
		{
			sum = sum + *(p + 1 + j + (11 * i));
		}
		printf("%5.1f   \n", sum/5);
	}
}
void scores(float*p)
{
	int i, j;
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 10; i++)
		{
			printf("%5.1f   ", *(p + 1 + (j * 11) + i));
		}
		printf("\n");
	}
}
void ascore_c(float *p)
{
	float sum = 0.0;
	int i, j;
	for (j = 0; j < 5; j++)
	{
		sum = 0.0;
		for (i = 0; i < 10; i++)
		{
			sum = sum + *(p + 1 + (j * 11) + i);
		}
		printf("%5.1f   \n", sum / 10);
	}
}
int main()
{
	float arr[5][11] = { { 1, 23, 23, 23, 23, 23, 46, 46, 46, 46, 23 }, { 1, 23, 23, 23, 23, 23, 46, 46, 46, 46, 23 }, 
	{ 1, 23, 23, 23, 23, 23, 46, 46, 46, 46, 23 }, { 1, 23, 23, 23, 23, 23, 46, 46, 46, 46, 23 }, { 1, 23, 23, 23, 23, 23, 46, 46, 46, 46, 23 } };
	ascore_s(arr);
	scores(arr);
	ascore_c(arr);
	return 0;
}