#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//101
//输入5个学生各5科成绩，输出成绩及总分
//int main()
//{
//	int arr[5][5] = { 0 };
//	int i = 0, j;
//	int sum[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			sum[i] = arr[i][j] + sum[i];
//		} 
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("%d", sum[i]);
//		printf("\n");
//	}
//	return 0;
//}

//102
//矩阵定位
//输入矩阵，输入位置，求出此位置的值
//#include<stdlib.h>
//int main()
//{
//	int m, n,x,y,s;
//	scanf("%d%d", &m, &n);
//	int k = m * n;
//	int *p=(int*)malloc(m * n * sizeof(int));
//	int* ret = p;
//	if (p == NULL)
//	{
//		printf("错误");
//		return 1;
//	}
//	while (k)
//	{
//		scanf("%d", p);
//		p++;
//		k--;
//	}
//	scanf("%d%d", &x, &y);
//	if (x > 0 && x <= m && y > 0 && y <= n)  // 增加坐标合法性判断
//	{
//		s = (x - 1) * n + y - 1;  // 修正索引计算逻辑，从1开始计数转0开始计数
//		printf("%d", *(ret + s));
//	}
//	else
//	{
//		printf("输入坐标超出范围");
//	}
//	free(ret);
//	return 0;
//
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}//输入矩阵
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	if (x > 0 && x <= n && y > 0 && y <= m)
//	{
//		printf("%d", arr[x - 1][y - 1]);
//	}
//	else
//	{
//		printf("输入坐标超出范围");
//	}
//	return 0;
//
//}

//103
//输入一行数字，输出一个矩阵
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}//输入矩阵
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 问题不能使用回车键来写入
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	int j, num;
//	for (i = 1; i <= n * m; i++)
//	{
//		scanf("%d", &num);
//		printf("%d ", num);
//		if (i % n == 0)
//			printf("\n");
//	}
//	return 0;
//}
	
//104
//最高身高的位置
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}//输入矩阵
//	int max = arr[0][0];
//	int maxi, maxj;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				maxi = i;
//				maxj = j;
//			}
//		}
//	}
//	printf("%d %d", (maxi+1),(maxj+1));
//	return 0;
//}

//105
//判断两个矩阵是否相等
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//
//	int arr[10][10] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}//输入矩阵1
//	int arr2[10][10] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}//输入矩阵2
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] != arr2[i][j])
//			{
//				printf("NO\n");
//				return 1;
//			}
//		}
//	}
//	printf("YES\n");
//return 0;
//}

//浮点型数据
//int main() {
//    // 使用科学计数法表示浮点数
//    double num1 = 1.23e4;  // 1.23 * 10^4
//    double num2 = 5.67E-3; // 5.67 * 10^-3
//
//    // 打印浮点数
//    printf("num1 = %e\n", num1); // 使用%e格式打印
//    printf("num2 = %E\n", num2); // 使用%E格式打印
//    return 0;
//}

//106
//上三角矩阵判断
//主队对角线以下的元素位置全为0
//int main()
//{
//	int  n;
//	scanf("%d",  &n);
//	int arr[10][10] = { 0 };
//	int i , j ;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}//输入矩阵1
//	//两条主对角线
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (j<i )
//			{
//				if (arr[i][j] != 0)
//				{
//					printf("NO");
//					return 1;
//				}
//			}
//		}
//	}
//	printf("YES");
//	return 0;
//}

//107
//矩阵转置
//不写了

//108
//矩阵交换
//经过k次交换后的矩阵 
//a b 列或行进行交换
//int main( )
//{
//	int m, n, k, a, b;
//	char x;
//	int arr[10][10] = { 0 };
//	scanf("%d%d", &m, &n);
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	scanf("%d", &k);//交换次数
//	getchar();
//	int tm;
//	while (k)
//	{
//		scanf("%c %d %d", &x, &a, &b);//进行什么交换，交换哪两组
//		switch (x)
//		{
//		case 'r'://行
//			for (j = 0; j < n; j++)
//			{
//				tm = arr[a-1][j];
//				arr[a-1][j] = arr[b-1][j];
//				arr[b-1][j] = tm;
//			}
//			break;
//		case 'c'://列
//			for (i= 0; i < n; i++)
//			{
//				tm = arr[i][a-1];
//				arr[i][a-1] = arr[i][b-1];
//				arr[i][b-1] = tm;
//			}
//			break;
//		default:
//			printf("输入错误\n");
//		}
//		k--;
//		getchar();
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//109
//杨辉三角 输入n，输出前n行的数
//int main( )
//{ 
//	int n;
//	scanf("%d", &n);
//	int arr[30][30] = { 1 };
//	int i,j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (j >= 1)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			else
//				arr[i][j] = arr[i - 1][j];
//			printf("%-3d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//110
////井字棋判断
//int main()
//{
//	char arr[3][3] = { 0 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf(" %c", (*(arr + i) + j));
//			//getchar();
//		}
//	}
//	//判断横竖，对角线
//	char flag = 'O';
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != 'O')
//		{
//			flag = arr[i][0];
//			break;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[2][i] != 'O')
//		{
//			flag = arr[0][i];
//			break;
//		}
//	}
//	return 0;
//}