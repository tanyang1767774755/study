#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float p1, p2, p3, p5, p0;
//	float sum = 1000.0, b1, b2, b3, b4, b5;
//	p1 = 0.0414;
//	p2 = 0.0468;
//	p3 = 0.054;
//	p5 = 0.0585;
//	p0 = 0.0072;
//	b1 = sum*(1 + 5 * p5);
//	b2 = sum*(1 + 2 * p2)*(1 + 3 * p3);
//	b3 = sum*(1 + 3 * p3)*(1 + 2 * p2);
//	b4 = sum*pow(1 + p1, 5);
//	b5 = sum*pow(1 + p0 / 4, 20);
//	printf("p = %.2f\n", b1);
//	printf("p = %.2f\n", b2);
//	printf("p = %.2f\n", b3);
//	printf("p = %.2f\n", b4);
//	printf("p = %.2f\n", b5);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float r = 0.09, p = 1.0;
//	p =p*pow(1+r,10);
//	printf("%.2f", p);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int d, p;
//	float r, m;
//	scanf("%d,%d,%f", &d, &p, &r);
//	m = log(p / (p - d*r)) / log(1 + r);
//	printf("%.2f",m);
//	return 0;
//}
//#define PI 3.1415926
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double r, v;
//	scanf("%lf",&r);
//	v = (4 / 3)*PI*pow(r, 3);
//	printf("%.2f",v);
//	return 0;
//}
#include <stdio.h>
#include<math.h>
int main()
{
	//float P = 1000.0;
	//float p1 = 0.0414, p2 = 0.0468, p3 = 0.054, p5 = 0.0585, p0 = 0.0072, b1, b2, b3, b4, b5;
	//b1 = P*(1 + 5 * p5);
	//b2 = P*(1 + 2 * p2)*(1 + 3 * p3);
	//b3 = P*(1 + 3 * p3)*(1 + 2 * p2);
	//b4 = P*pow(1 + p1, 5);
	//b5 = P*pow((1 + p0 / 4), 20);
	//printf("%.2f\n", b1);
	//printf("%.2f\n", b2);
	//printf("%.2f\n", b3);
	//printf("%.2f\n", b4);
	//printf("%.2f\n", b5);
	int a, b, max;
	scanf("%d %d",&a,&b);
	if (a>b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("%d", max);
	return 0;
}   

