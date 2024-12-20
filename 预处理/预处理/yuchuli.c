#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
// .c文件 预处理/编译 汇编 链接 .exe文件
//预处理详解

//预定义符号

//__FILE__ //进行编译的文件
//__LINE__ 哪一行
//__DATE__ 打印日期
//__STDC__ 如果编译器遵循ANSIC 其值为1，否则未定义
//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"File:%s  line =%d   Data:%s   Time:%s   i=%d \n", __FILE__,__LINE__,__DATE__,__TIME__,i);
//		//File:E:\vscode\bilibili-c\预处理\预处理\yuchuli.c  line =16   Data:Dec 19 2024   Time:18:13:37   i=0
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%d", __STDC__);//未定义，不遵循
//	return 0;
//}

//定义标识符
//#define MAX 1000//不能加分号
//#define STR "hello"//可以定义多样
//#define print printf("hehe\n")
//#define CASE break;case
////一行代码太长，使用续行\
//int main( )
//{/*
//	switch ()
//	{
//	case 1:
//		CASE 2:
//			CASE 3:
//	}*/
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	print;
//	return 0;
//}

//define 定义宏
//        宏名       执行的内容
//#define SQUARE(X) (X)*(X)
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	//int r = SQUARE(5);
//	//int n = SQUARE(5+1);
//	//printf("%d\n", r);
//	//printf("%d\n", n);//36
//	int k = 2*DOUBLE(3-1);
//	printf("%d", k);
//	return 0;
//}


//#和##
//#define PRINT(N) printf("the value of " #N " is %d\n",N)
//int main()
//{
//	//printf("hello""world");
//	int a = 10;
//	PRINT(a);//#N会替换成"a" 把参数插入到字符串中
//	printf("the value of a is %d\n", a);
//	return 0;
//}
//#define PRINT(N,FORMAT) printf("the value of " #N "is" FORMAT"\n",N)
//int main()
//{
//	int a = 10;
//	PRINT(a,"%d");
//	float b = 33.2;
//	PRINT(b,"%lf");
//	return 0;
//}

//##把两边的符号合成一个符号
//#define CAT(Class,Num) Class##Num
//int main()
//{
//	int Class106 = 100;
//	printf("%d", CAT(Class, 106));//把Class 和106组合在一起
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//带有副作用的
//}
//有副作用 表达式出现永久性的结果
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	//int m = MAX(2, 3);
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++, b++);//先使用a后++
//	printf("%d ", m);//6
//	printf("%d ", a);//7
//	printf("%d ", b);//5
//	return 0;
//}
//宏的计算效率更高
//代码足够简单使用宏，代码多使用函数

//#undef 取消宏