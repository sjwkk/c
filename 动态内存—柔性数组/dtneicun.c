#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//malloc
//开辟内存块
//申请内存有可能失败，开辟失败返回空指针
//是在堆区内申请的
//变长数组-数组指定大小可用变量
//int main()
//{
//	//动态内存
//	//int* p = malloc(INT_MAX);Not enough space
//	int* p = malloc(40);//开辟40个字节;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//开辟成功，使用
//	//程序退出时会自动回收
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//	
//		printf("%d ", *(p + i));
//	}
//	free(p);//防止p变为野指针
//	return 0;
//}

//calloc
//int main()
//{
//	int * p=calloc(10, 4);//开辟并且初始化为0
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	free(p);
//	return 0;
//}

//realloc
//int main()
//{
//	int * p=malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//
//	}
//	//扩容
//	int * p1=realloc(p, 8000);//追加到8000,地址会发生变化
//	if (p1 != NULL)
//	{
//		p = p1;
//	}
//	//使用
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//	free(p);
//	return 0;
//} 
//realloc(NULL,40)==malloc(40)


//以下是错误做法
//void test()
//{
//	int* p = (int*)malloc(100);
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)//导致内存泄露
//		return ;
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//防止空指针
//		return 1;
//	}
	//int i;
	//for (i = 0; i <= 10; i++)//越界访问
	//{
	//	p[i] = i;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p = i;
	//	p++;
	//}
	//free(p);//使用free释放部分空间

	//free(p);//对同一块动态内存多次释放
	//free(p);

	//return 0;
//}

//柔性数组
struct S
{
	int i;
	int arr[ ];//柔性数组成员
};
int main()
{
	//int sz = sizeof(struct S);
	//printf("%d", sz);//为int的大小

	//使用
	struct S* ps=(struct S*)malloc(sizeof(struct S) + 40);//开辟44个字节，后40个字节是给arr
	if (ps == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	//ps指向的就是结构体
	ps->i = 100;//无用只代表100
	int n = 0;
	for (n = 0; n < 10; n++)
	{
		ps->arr[n] = n;
		printf("%d", ps->arr[n]);
	}
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);//开辟到80个字节
	if (ptr != NULL)
	{
		ps = ptr;
	}
	free(ps);
	ps = NULL;
	return 0;
}