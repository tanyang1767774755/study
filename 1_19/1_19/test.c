#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int isab(char ch)
{
	if ((ch <= 'z'&&ch >= 'a') || (ch <= 'Z'&&ch >= 'A'))
		return 1;
	else
		return 0;
}
int isvowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		return 1;
	else
		return 0;
}




int main()
{
	int i, j, b;
	char str[] = {"ajksdhg asjkdghk akjsdg hjjk jkahg jkhjk ooas,, asdf, "};

	for (j = 0; j < strlen(str); j++)
	{
		printf("%c", str[j]);
	}//²âÊÔ
	b = 1;
	for (i = 0; i < strlen(str); i+=b)
	{
		b = 1;
		if (isab(str[i]))
		{
			for (j = i+1;; j++)
			{	
				printf("%c",str[j-1]);
				if (!isab(str[j]))
				{
					b = j - i;
					printf("//%d", b);
					break;
				}
			}
							
		}
		else
			printf("%c",str[i]);
	}
	

	return 0;
}