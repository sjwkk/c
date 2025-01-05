#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//89密码验证
//int main()
//{
//	char arr1[100];
//	char arr2[100];
//	scanf("%s %s", arr1,arr2);
//	/*gets(arr1);
//	gets(arr2);*///不能使用空格了
//	if (strcmp(arr1, arr2) == 0)
//		printf("same");
//	else
//		printf("different");
//	return 0;
//}

//90
//输入N*M的矩阵，计算其中大于0的元素之和
//int main()//看成一维数组，要*
//{
//	int arr[2][3] = { 1,2,-3,-4,5,6 };
//	int* p = *arr;
//	int i=0;
//	for (; p < *arr + 6; p++)
//	{
//		if (*p > 0)
//			i += (*p);
//	}
//	printf("%d", i);
//	return 0;
//}

//int main()
//{
//	int arr[2][3] = { 1,2,3,4,-5,-6 };
//	int i, j;
//	int(*p) [6] = arr;//数组指针
//	int sum = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (*(*(p + i) + j) > 0)
//				sum += *(*(p + i) + j);
//
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//逆序输出
//使用数组，存入后直接使用i输出


//int main()
//{
//	int n,m;
//	int max=0, min=100;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		if (max < m)
//			max = m;
//		if (min > m)
//			min = m;
//	}
//	printf("%d %d", max, min);
//	return 0;
//}


//判断一个序列是不是有序
//int main()
//{
//	int n;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	int i, j;
//	int flag1=0,flag2=0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i > 0)
//		{
//			if (arr[i] > arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else
//			{
//				flag2 = 1;
//			}
//		}
//
//	}
//	if ((flag1 + flag2) == 1)
//		printf("s");

	/*if (arr[0] > arr[1])
	{
			for (j = 0; j < n ; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					printf("un");
					return 1;
				}
			}
			printf("s");
			return 1;
	}

	if (arr[0] < arr[1])
	{
			for (j = 0; j < n; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					printf("un");
					return 1;
				}
			}
			printf("s");
	}*/

	/*return 0;
}*/

//序列中删除指定数
//int main()
//{
//	int n,m;
//	int arr[50] = { 0 };
//	scanf("%d%d", &n,&m);
//	int i, j=0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] != m)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for ( i=0;i<j; i++)
//	{
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

