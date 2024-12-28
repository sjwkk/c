#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//计算阶乘
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//计算阶乘的和
//int main()
//{
//	int n,i,j;
//	int ret ;
//	int sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *=i;
//		}
//		sum = ret + sum;
//	}
//	printf("%d", sum);
//	return 0;
//}
//改进
//int main()
//{
//	int n,i,j;
//	int ret=1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = ret + sum;
//	}
//	printf("%d", sum);
//	return 0;
//}

//依次输入10个整数，要求输出其中最大的数
//int main()
//{
//	int arr[10] = { 0 };
//	int max,i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}

//ASCII
//int main()
//{
//	char ma;
//	scanf("%c", &ma);
//	printf("%d ", ma);
//	/*if (ma <= 90 && ma >= 65)
//		ma = ma + 32;*/
//	//ma = 'x' - 1;
//	ma = ma + 1;
//	printf("%d ", ma);
//	printf("%c", ma);
//	return 0;
//}

//布尔类型
//#include<stdbool.h>
//int main()
//{
//	bool flag = true;//需要添加头文件
//	_Bool flag = 1;
//	return 0;
//}

//求3位数的每一位，依次输出
//int main()
//{
//	int x = 123;
//	int bai, shi, ge;
//	ge = x % 10;
//	bai = x / 100;
//	shi = x %100 /10;
//	printf("%d %d %d", bai, shi, ge);
//	return 0;
//}

//printf规定域宽
//int main()
//{
//	double x = 1.2;
//	double y = 0.2;
//	printf("x%-6.3lfx", x / y);
//	return 0;
//}


//从键盘输入BOY三个字符，然后把它们输出到屏幕。
//int main()
//{
//	char a, b, c;
//	a = getchar();
//	getchar();//吸收回车键
//	b = getchar(); 
//	getchar();
//	c = getchar();
//	putchar(a);
//	putchar(b); 
//	putchar(c);
//	return 0;
//}


//字符ch，判别它是否大写字母
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	/*if (ch >= 'A' && ch <= 'Z')
//		ch = ch + 32;*/
//	(ch >= 'A' && ch <= 'Z') ? (ch=ch + 32) : ch;
//	printf("%c", ch);
//	return 0;
//}

//枚举和switch
//enum Dara
//{
//	Add = 1,
//	Del,
//	Search
//};
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	switch (i)
//	{
//	case Add:
//		printf("a");
//		break;
//	case Del:
//		printf("d");
//		break;
//	case Search:
//		printf("S");
//		break;
//	default:
//		printf("输入错误");
//	}
//	return 0;
//}

//输入两个整数 输入 + -*/ 进行运算并显示结果

//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	getchar();//吸收回车
//	char ch;
//	ch = getchar();
//	switch (ch)
//	{
//	case '+':
//		printf("%d", x + y);
//		break;
//	case '-':
//		printf("%d", x - y);
//		break;
//	case '*':
//		printf("%d", x * y);
//		break;
//	case '/':
//		printf("%d", x /y);
//		break;
//	default:
//		printf("输入错误");
//	}
//	return 0;
//}

//将一个二维数组行和列的元素互换，存到另一个二维数组中。
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int b[3][2] = { 0 };
//	int  i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二维数组找最大值及其位置
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4,9, 8, 7, 6, -10, 10,-5, 2 };
//	int a, b,i,j;
//	a = 0, b = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 1; j < 4; j++)
//		{
//			if (arr[i][j] > arr[a][b])
//				a = i, b = j;
//		}
//	}
//	printf("%d %d %d", a, b, arr[a][b]);
//	return 0;
//}

//矩阵求和
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 
//					  9, 8, 7, 
//					 10, 10,5};
//	//主对角线求和
//	int i, j;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3;j++)
//		{
//			if (i == j||i+j==2)
//				sum += arr[i][j];
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//字符串数组
//int main()
//{
//	char arr[10] = "i am happy" ;//这种情况会导致数组越界
//	//char arr[11] = "i am happy";//正确的
//	char c[15] = { 'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','\0' };//要自动添加一个\0
			//或者采用以下方法，一个一个读取，不是读取到\0
			//  int i;
			//for (i = 0; i < 15; i++)
			//printf("%c", c[i]);
//	printf("%s", c);
//	return 0;
//}

//字符串函数
#include<string.h>

//puts,输出字符串
//gets,输入字符串
//int main()
//{
//	char str[5] = "abcd";
//	char arr[5];
//	gets(arr);//只会以回车结束，其他字符会保留
//	puts(str);
//	puts(arr);
//	return 0;
//}

//输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。Ø 问题的关键：判断“出现新单词”出现新单词n
//int main()
//{
//	_Bool flag = 0;
//	char arr[13] = "i am  a boy";
//	int i=0;
//	int n = 0;
	/*for (i = 0; i < 13; i++)
	{
		if (arr[i] == ' ' && arr[i-1] != ' ')
			flag = 1;
		else if (arr[i] != ' ' ||arr[i-1] == ' ')
			flag = 0;
		if (flag)
			n++; 
	}*/
	
	/*while (arr[i] != '\0')
	{
	
		if (arr[i] != ' ' && flag == 0)
		{
			n++;
			flag = 1;
		}
		if (arr[i] == ' ')
			flag = 0;
		i++;
	}
	printf("%d", n);
	return 0;
}*/

