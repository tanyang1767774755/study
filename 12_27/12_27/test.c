#define _CRT_SECURE_NO_WARNINGS 1
typedef struct stu
{
	int num;
	char name[10];
	float score1;
	float score2;
	float score3;
} stu;


int main()
{
	stu st1, st2, st3;
	scanf("%d %s %f %f %f",&st1.num,&st1.name,&st1.score1,&st1.score2,&st1.score3);
	printf("%d %.1f\n",st1.num, (st1.score1 + st1.score2 + st1.score3)/3);
	printf("%d %s %.1f %.1f %.1f %.1f", st1.num, st1.name, st1.score1, st1.score2, st1.score3, (st1.score1 + st1.score2 + st1.score3) / 3);
	return 0;
}