#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp_int(const void* e1, const void* e2)//void* 指针不能直接解引用//void* 指针，无具体类型，可以接受任意类型的地址，不能解引用操作，也不能进行+-操作 
{
		//return (*(int*)e1 - *(int*)e2);//是升序
		return (*(int*)e1 - *(int*)e2);//是降序
		//大于 返回大于0
		//等于 返回0
		//小于 返回小于1
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp;
		tmp = *buf1;//交换字节
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++; buf2++;//首元素地址+1

	}
}
void sort(void* arr,int sz, int width,int (*cmp)(const void* elem1, const void* elem2))
//确定每个元素的位置
{
	//进行sz-1次
	int i,j;
	
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组是排好序的
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ( cmp(  (char*)arr+j*width , (char*)arr + (j +1)* width )  > 0)//强制转换为char*类型
			{
				Swap( (char*)arr + j * width ,  (char*)arr + (j + 1) * width , width );//待比较的元素的地址，其实是第j个数据的首地址，因为是相邻的所以就确定了位置
				flag = 0;
			}
		}
		if (flag==1)
			break;//提升排序的效率
	}
}
//qsort
//void qsort(void* base, //要比较的数据的起始位置
//	size_t num, //待排序的数组元素个数
//	size_t width, //数据元素的大小
//	int(* compare)(const void* elem1, const void* elem2)//函数指针，比较函数
//
//);

//比较两个整型元素

void test3()
{
	int arr[] = { 3,8,7,9,4,5,6,1,2,0 };
		//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
		//sort(arr, sz);
	sort(arr, sz, sizeof(arr[0]), cmp_int);//数组，大小，每个数据的大小，两个整型变量比较函数
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void test1()
//{
//	int arr[] = { 3,8,7,9,4,5,6,1,2,0 };
//		//把数组排成升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		//sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//数组，大小，每个数据的大小，两个整型变量比较函数
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//struct STU
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_STU(const void* e1, const void* e2)
//{
//	//按名字排序
//	return strcmp(((struct STU*)e1)->name, ((struct STU*)e2)->name);
//}
//void test2()
//{
//	struct STU s[] = { {"张三",15},{"李四",30},{"王五",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_STU);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//	
//		printf("%d %s\n", s[i].age,s[i].name);
//	}
//
//}
//
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}

