#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//111
//进制转化
//使用递归
//int IS_(int x)
//{
//	if (x / 6 == 0)
//		printf("%d",x%6);
//	
//	else
//	{
//		 IS_(x / 6);
//		 printf("%d" ,x % 6);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	//普通
//	int i = 0;
//	int arr[40] = { 0 };
//	while (n)
//	{
//		arr[i] = n % 6;
//		i++;
//		n = n / 6;
//	}
//	for (i--; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	//使用递归
//	IS_(n);
//	return 0;
//}

//112
//求和
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	//使用等差数列
//	long long sum=(1 + n)* n / 2;//防止溢出
//	printf("%lld", sum);
//	return 0;
//}

//113
//输入现在时刻和要睡的时长
//输出睡醒的时间
//int main()
//{
//	int minu, hour, n;
//	scanf("%d:%d %d", &hour, &minu, &n);
//	if ((minu + n) >= 60)
//	{
//		hour=hour+(minu + n) / 60;
//		minu = (minu + n) % 60;
//		if (hour >= 24)
//			hour -= 24;
//	}
//	else
//	{
//		minu = minu + n;
//	}
//	printf("%02d:%02d", hour, minu);
//	return 0;
//}

//114
//排队电梯
//n个人等电梯，从一楼到楼顶要2分钟
//int main()
//{
//	int n,time;
//	time = 0;
//	scanf("%d", &n);
//	time = 4 * (n / 12) + 2;
//	printf("%d", time);
//	return 0;
//}

//115
//求最大公约数和最小公倍数
//int main()
//{
//	int m, n,k;
//	int i= 1;
//	scanf("%d%d", &m, &n);
//	int m1 = m, n1 = n;
//	//最大公约数是辗转相除法
//	while (m%n!=0)
//	{
//		k = m % n;
//		m = n;
//		n = k;
//	}
//	int max = n;
	
	//最小公约数
	/*int max = n > m ? n : m;
	while (1)
	{
		if (n % max == 0 && m % max == 0)
		{
			break;
		}
		max--;
	}*/
	//最小公倍数
	//法一复杂
	/*while (1)
	{
		if ((max * i) % m == 0 && (max * i) % n == 0)
		{
			break;
		}
		i++;
	}
	int min = max * i;*/
	//快速
//	int min = (m1 * n1) / max;
//	printf("%d %d\n", max, min);
//
//	printf("%d", max+min);
// return 0;
//}


//116
//输入一个整数，每一位如果为奇数——1，如果为偶数——2
//int main()
//{
//	int x;
//	int arr[100000] = { 0 };
//	int i = 0;
//	scanf("%d", &x);
//
//	arr[i] = x % 10;
//	while (x / 10 != 0)
//	{
//		i++;
//		x = x / 10;
//		arr[i] = x % 10;
//	}
//	if (arr[i] % 2 == 0)
//	{
//		int flag = 1;
//		i--;
//		while (i >= 0)
//		{
//			if (flag==1)
//			{
//				if (arr[i] % 2 == 1)
//				{
//					printf("1");
//					flag =0;
//				}
//				i--;
//			}
//			else if (flag == 0)
//			{
//				if (arr[i] % 2 == 0)
//					printf("0");
//				else
//					printf("1");
//				i--;
//			}
//		}
//		if (flag==1)
//			printf("0");
//    }
//	else
//	{
//		while (i >= 0)
//		{
//			if (arr[i] % 2 == 0)
//				printf("0");
//			else
//				printf("1");
//			i--;
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int n;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		int m = n % 10;
//		if (m%2== 1)
//		{
//			m = 1;
//		}
//		else
//		{
//			m = 0;
//		}
//		sum+=m* pow(10, i);//求幂函数
//		//使用一个sun+=，000转为0
//		n = n / 10;
//		i++;
//	}
//	printf("%d", sum);
//	return 0;
//}

//117
//青蛙跳台阶，使用递归
//就是斐波那契数列
//int main()
//{
//	int fib(int);
//	int n;
//	scanf("%d", &n);
//	int x = fib(n);
//	printf("%d", x);
//	return 0;
//}
//int fib(int n)
//{
//	int count=0;
//	if (n <= 2)
//	{
//		count = n;
//	}
//	else if(n>2)
//	{
//		count=fib(n - 1)+fib(n - 2);
//	}
//	return count;
//}

//118
//去重后排序
//输入数字小于数字个数
//int main()
//{
//	int n;
//	int i = 0;
//	int arr[10000] = { 0 };
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		scanf("%d", &arr[i]);
//		n--;
//		i++;//最后的i就是数组的个数
//	}
//
//	int j,k;
//	for (k = 0; k < i-1; k++)
//	{
//		for (j = 0; j < i - 1 - k; j++)
//		{
//			if ((arr[j] > arr[j + 1]))
//			{
//				int t;
//				t = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = t;
//			}
//			else if (arr[j] == arr[j + 1]&&arr[j]!=0)
//			{
//				arr[j ] = 0;
//			}
//		}
//	}
//	k = 0;
//	while (i)
//	{
//		if (arr[k] > 0)
//		{
//			printf("%d ", arr[k]);
//		}
//		k++;
//		i--;
//	}
//	return 0;
//}

//使用简单方法
//int main()
//{
//	int n;
//	int arr[100001] = { 0 };
//	int i;
//	scanf("%d", &n);
//	int max = n;
//	while (n)
//	{
//		scanf("%d", &i);
//		arr[i]++;
//		n--;
//	}
//	i = 1;
//	while (max)
//	{
//		if(arr[i]>0)
//			printf("%d ", i);
//		i++;
//		max--;
//	}
//	return 0;
//}

//119
//字符串中子串的个数
//CCHNCHN中CHN的个数为7
//#include<string.h>
//int main()
//{
//	//char* p = NULL;
//	//scanf("%s", p);//是错误的，因为*string指向字符串，可以读取字符串常量，但是不能改变所指向字符串内容
//	char arr[1000] = { 0 };
//	scanf("%s", arr);
//	
//	char* p = "CHN";
//	int sz = strlen(arr);
//
//	int a = 0;
//	int count = 0;
//	int b,c;
//	while (a<sz)//控制依次寻找 C
//	{
//		
//		if (arr[a]=='C')
//		{
//			
//			b =a+1;
//			while (b< sz)
//			{
//				if (arr[b]=='H')
//				{
//					c=b+1;
//					while (c< sz)
//					{
//						if (arr[c]== 'N')
//						{
//							count++;
//						}
//						c++;
//					}
//				}
//				b++;
//			}
//		}
//		a++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	char arr[8000] = { 0 };
//	scanf("%s", arr);
//	int c=0;
//	int ch=0;
//	int chn=0;
//	char* p = arr;
//	while (*p)
//		//CCHNCHN
//	{
//		if (*p == 'C')
//			c++;
//		else if (*p == 'H')
//			ch += c;
//		else if (*p == 'N')
//			chn += ch;
//		p++;
//	}
//	printf("%d", chn);
//	return 0;
//}

//120
//找最大数
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//121
//转换成绩
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n > 90 && n < 100)
//		printf("A");
//	else if (n >= 80)
//		printf("B");
//	else if (n >= 70)
//		printf("C");
//	else if (n >= 60)
//		printf("D");
//	else 
//		printf("E");
//	return 0;
//}

