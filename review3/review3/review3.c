#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct Data
//{
//	int year;
//	int month;
//	int day;
//};
//struct Stu
//{
//	struct Data birth;
//	int age;
//	char name[20];
//};
//int main()
//{
//	struct Stu stu1, stu2;
//	stu1.birth.day = 3;//结构体可以在另一个结构体中
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//struct Cir
//{
//	struct Point point1;
//	int r;
//};
//int main()
//{
//	struct Cir c1, c2;
//	c1.point1.x = 3;
//	c1.point1.y = 4;
//	c1.r = 5;
//
//	c2.r = 1;
//	c2.point1.x = 0;
//	c2.point1.y = 2;
//
//	return 0;
//}


//int main()
//{
//	struct Student
//	{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[20];
//	};
//	struct Student a = { 10101,"Li Lin",'M',"123BeijingRoad" };
//	struct Student b = a;
//	struct Student * p = &b;
//	printf("NO.:%ld\nname:%s\nsex:%c\naddress:%s\n", p->num,p->name,p->sex,p->addr); 
//	return 0;
//}

//统计票数
//int main()
//{
//	struct Peo
//	{
//		char name[20];
//		int count;
//	};
//	struct Peo p[2] = { { "zhang san",15},{"li si",10}};
//	p[0].count++;
//	printf("%d \n", p->count);
//	printf("%d ", p[0].count);
//	printf("%d\n", (p + 1)->count);
//	struct Peo* i = p;
//	i += 1;
//	printf("%d\n", i->count);//10
//	return 0;
//}


//枚举
int main()
{
	enum Color { red, yellow, blue, white, black };
	enum Color i, j, k, pri;//枚举变量
	int n, loop;
	n = 0;
	for (i = red; i <= black; i++)
	{

		for (j = red; j <= black; j++)
		{
			if (i != j)
			{

				for (k = red; k <= black; k++)
				{
					if ((k != i) && (k != j))
					{
						n = n + 1;
						printf("% -4d", n);
						for (loop = 1; loop <= 3; loop++)
						{

							switch (loop)
							{
							case 1: pri = i; break;
							case 2: pri = j; break;
							case 3: pri = k; break;
							default:break;
							}

							switch (pri)
							{
							case red: printf(" %-10s", "red"); break;
							case yellow:printf("%-10s", "yellow"); break;
							case blue: printf(" %-10s", "blue"); break;
							case white: printf(" %-10s", "white"); break;
							case black: printf("%-10s", "black"); break;
							}
						}
						printf("\n");
					}
				}
			}
		}
	}
	printf("\ntotal:%5d\n", n);
	return 0;
}