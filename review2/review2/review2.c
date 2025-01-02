#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//2输入两个整数，要求输出其中值较大者。要求用函数来找到大数。
// 三目操作符
//int main()
//{
//	int MAX(int, int);
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int max = MAX(x, y);
//	printf("%d", max);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	int max;
//	/*if (x > y)
//		max = x;
//	else
//		max = y;*/
//	max = x > y ? x : y;
//	return max;
//}

//写一个判断素数的函数，在主函数中输入一个整数，输出是否为素数的信息。
//素数，只有1和它本身
//#include<math.h>
//int main()
//{
//	void sushu(int);
//	int x;
//	scanf("%d", &x);
//	sushu(x);
//	return 0;
//}
//void sushu(int x)
//{
//	int i;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			printf("不是素数");
//			return 0;
//		}
//	}
//	printf("是素数");
//}

//函数可以嵌套定义
//函数递归 第5个学生的年龄
//int main()
//{
//	int agename(int);
//
//	int x = agename(5);
//	printf("%d", x);
//	return 0;
//}
//int agename(int x)
//{
//	int age;
//	if (x == 1)
//		age = 10;
//	else
//		age = agename(x - 1) + 2;
//	return age;
//}

//求ｎ！ 用递归方法
//int main()
//{
//	int fn(int);
//	int x;
//	scanf("%d", &x);
//	int res = fn(x);
//	printf("%d", res);
//	return 0;
//}
//int fn(int x)
//{
//	int res;
//	if (x ==1)
//		res = 1;
//	else if(x>1)
//		res = fn(x - 1) * x;	
//	return res;
//}

//斐波那契数列
//int main()
//{
//	int fac(int);
//	int x;
//	scanf("%d", &x);
//	int res = fac(x);
//	printf("%d", res);
//	return 0;
//}
//int fac(int x)
//{
//	int res;
//	if (x == 1 || x == 2)
//		res = 1;
//	else if (x > 2)
//	{
//		res = fac(x - 1) + fac(x - 2);
//	}
//	return res;
//}

//递归反向输出字符串 ABCD#，输出字符串：DCBA
//int main()
//{
//	void nixu(char[]);
//	char arr[] = "ABCD#";//strlen-5 sizeof-6
//	nixu(arr);
//
//	return 0;
//}
//void nixu(char* arr)
//{
//	if ((*arr) != '#')
//	{
//		nixu(arr + 1);
//		printf("%c", *arr);
//	}
//}

//交换两个变量的值
//int main()
//{
//	void swap(int*, int*);
//	int x = 3;
//	int y = 4;
//	swap(&x, &y);
//	printf("%d %d", x,y);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int z;
//	z = *x;
//	*x = *y;
//	*y = z;
//}

//数组指针
//int (*p) []
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int i, j;
	//for (i = 0; i < 2; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ", *(a[i] + j));
	//		//*(a+i)=a[i]
	//		//*(a[i]+j)=a[i][j]
	//	}
	//	printf("\n");
	//}
	//printf("%d", *(*(a+1)+0));
	//定义列指针
	/*int* p = NULL;
	for (p=&a[0][0]; p < a[0] + 6; p++)
	{
		printf("%d ", *p);
	}*/
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int (*p)[4] = a;
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			/*printf("%d ",*(*(p + i) + j));*/
//			printf("%d ", (*(p + i))[j]);
//	//在 C 语言中， [] 运算符（即下标运算符）的优先级高于 * （解引用运算符）
//	// 所以表达式 (p + i)[j] 实际上等价于 *(p + i + j)
//return 0;
//}


//有一个班，3个学生，各学4门课，计算总平均分数以及第n个学生的成绩
//int main()
//{
//	int a[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
//	//void search(int (*p )[],int );//地址
//	void ave(int *);
//	//search(a,2);
//	printf("\n");
//	ave(*a);//当使用*a时，它实际上是将二维数组a视为一个一维数组a[0]，取其首元素的地址。
//	return 0;
//}
//void ave(int* m)
//{
//	int* n = m+11;
//	for (; m<=n ; m++) 
//	{
//		printf("%d ", *m);
//	}
//}
//void search(int (*p)[4], int x)//只传第一行的地址
//{
//	int j;
//	for (j = 0; j < 4; j++)
//	{
//		printf("%d ",*(*(p+x-1)+j));
//	
//}



//字符串指针
//int main()
//{
//	char str[8] = "abcdefg";
//	//printf("%c", str[6]);//g
//	//string[]保存字符串，可以修改数组内容
//	// * string指向字符串，可以读取字符串常量，但是不能改变所指向字符串内容
//	char* s = "abcdf";
//	printf("%s\n", s);
//	printf("%c",*( s + 1));
//	return 0;
//}

//字符串复制
//#include<string.h>
//int main() {
//	char a[] = "I ama boy.";
//	char b[] = "hello";
//	char* p1 = a, * p2 = b;
//	//把b的内容复制到a
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++, p2++;
//	}
//	*p1 = '\0';
//	printf("%s\n", a);
//	printf("%d", strlen(a));
//	return 0;
//}

//用函数调用实现字符串的复制。定义函数mystrcpy 字符数组名做参数.字符指针变量做参数
//int main()
//{
//	void mystrcpy(char* ,char*);
//	char a[] = "abcdef ";
//	char b[] = "ghijk";
//	char* p1 = a, * p2 = b;
//	mystrcpy(a, b);
//	printf("%s", a);
//	return 0;
//}
//void mystrcpy(char* a, char* b)
//{
//	for (; *b != '\0'; b++,a++)
//	{
//		*a = *b;
//	}
//	*a = '\0';
//}

//用函数调用实现字符串的连接strcat
//int main()
//{
//	void mystrcat(char*, char*);
//	char a[100] = "abcdef";
//	char b[] = "ghijk";
//	mystrcat(a, b);
//	printf("%s", a);
//	return 0;
//}
//void mystrcat(char* a, char* b)
//{
//	//找到末尾然后插入
//	while (*a != '\0')
//	{
//		a++;
//	}
//	for (; *b != '\0'; b++)
//	{
//		*a = *b;
//		a++;
//	}
//	*a = '\0';
//}



// //指针数组
//int *p []
//使用行指针来遍历数组
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int* p[2];
//	p[0] = a;
//	p[1] = a + 1;
//	int  i,j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//处理多组字符串
int main()
{
	char* p[5] = {"I am a student","I choose a course" ,
	"My score is 96" ,"Good job","Keep going"};
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s \n"	, p[i]); //输出：指向的字符串的首地址
	}
	return 0;
}
