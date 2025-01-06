#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//请统计某个给定范围 [L, R] 的所有整数中，数字2 出现的次数。
//int main()
//{
//	int l, r,n;//r<100000
//	int count = 0;
//	scanf("%d%d", &l,&r);
//	for (; l <= r; l++)
//	{
//		n = l;
//		while (n)
//		{
//			if(n % 10 == 2)
//				count++;
//			n=n / 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//A 是 1 Z 是26
//int main()
//{
//	char a[7];//彗星
//	char b[7];//小组名字
//	scanf("%6s", a);
//	scanf("%6s", b);
//	int i;
//	long long int am = 1;
//	long long int bm = 1;
//	for (i = 0; i < 6; i++)
//	{
//		if(a[i]>='A'&&a[i]<='Z')
//			am = am * (a[i]-64);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		if (b[i] >= 'A' && b[i] <= 'Z')
//			bm = bm * (b[i]-64);
//	}
//	if ((bm % 47) == (am % 47))
//		printf("go");
//	else
//		printf("stay");
//	return 0;


//验证哥德巴赫
//#include<math.h>
//int fn(int n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if(n%i==0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int fn(int);
//	int n;
//	scanf("%d", &n);
//	int i,j,k;
//	for (i = 4; i <= n; i+=2)
//	{
//		//找质数
//		for (j = 2; j < i; j++)
//		{
//			k = i - j;
//			if (fn(j)!=0&&fn(k)!=0)
//			{
//				printf("%d=%d+%d\n", i, j, k);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//给定一个整数 N，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，
// 即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例 2）。
//#include<math.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int arr[10] = { 0 };
//	int i = 0;
//	while (N)
//	{
//		arr[i] = N % 10;
//		N /= 10;
//		i++;
//	}
//	int n=0,j=0;
//	i--;
//	while (i>=0)
//	{
//		n += (arr[i]) * pow(10, j);
//		i--;
//		j++;
//	}
//	printf("%d", n);
//	return 0;
//}

//一组数，分别表示地平线的高度变化。高度值为整数，
// 相邻高度用直线连接。找出并统计有多少个可能积水的低洼地？
//int main()
//{
//	int n,i;
//	int count = 0;
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 2; i < n-1; i++)
//	{
//		if (arr[i - 1] > arr[i] && arr[i + 1] > arr[i])
//			count++;
//		if (arr[i] == arr[i + 1])
//		{
//			i++;
//			while (i < n)
//			{
//				if (arr[i] < arr[i + 1])
//				{
//					count++;
//					break;
//				}
//				else if (arr[i] == arr[i + 1])
//				{
//					i++;
//				}
//				else
//					break;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

