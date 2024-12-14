#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//strerror错误报告
//int main()
//{
//	printf("%s\n", strerror(1));//Operation not permitted
//	FILE* pf=fopen("test.txt", "r");
//	//errno 全局的错误码存放的变量
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));//No such file or directory
//	}
//	return 0;
//}


//字符分类函数
//#include<ctype.h>
//int main()
//{
//	int a = isspace('w');
//	printf("%d", a);//0
//	return 0;
//}

//字符转化函数
//int main()
//{
//	printf("%c", tolower('A'));
//	return 0;
//}

//memcpy
// 负责拷贝内存，两块独立空间中的数据
// 无法实现重叠空间
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 28);//字节数
//	float arr3[] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0 };
//	float arr4[10] = { 0 };
//	memcpy(arr4, arr3, 28);
//	return 0;
//}
#include<assert.h>
//void* my_memcpy(void* deat, void* src, size_t num)
//{
//	assert(deat && src);
//	void* ret = deat;
//	while (num--)
//	{
//		*(char*)deat = *(char*)src;
//		deat = (char*)deat + 1;
//		src = (char*)src + 1;
//		
//	}
//	return ret;
//}
//void test1()
//{
//
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[10] = { 0 };
//	my_memcpy((char*)arr2, (char*)arr1, 20);
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d  ", arr2[i]);
//	}
//	printf("\n");
//}
//
//void* my_memmove(void* deat, void* src, size_t num)
//{
//	assert(deat && src);
//	char* ret = deat;
//
//	if (deat < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)deat = *(char*)src;
//			deat = (char*)deat + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char*)deat+num)=*((char*)src + num);
//		}
//	}
//	return ret;
//}
////重叠空间 memmove的
//void test2()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	//memmove(arr1 + 2, arr1, 20);
//	my_memmove(arr1 + 2, arr1, 20);
//	int i;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%d  ", arr1[i]);
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//memcmp内存比较
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d", ret);//一对字节一对字节的比较
//	return 0;
//}

//memset
int main()
{
	//char arr[] = "hello bit";
	//memset(arr, 'x', 1);//设置1个字节为x
	//printf("%s\n", arr);
	//memset(arr + 6, 'x', 3);
	//printf("%s", arr);
	int arr[10] = { 0 };
	memset(arr, 1, 40);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}