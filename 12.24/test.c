
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct stu
{
	char name[10];
	int age;
	char tell[12];
}stu;

void print_stars(int n)
{
	int i, j;
	for (i = 0; i<n; i++)

	{
		for (j = 0; j<i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int n;
	///*stu s = { "tanyang" ,0, 15571847699 };
	//printf("%s",s.name );*/
	print_stars(6);
	return 0;
}
