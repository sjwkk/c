#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//101
//����5��ѧ����5�Ƴɼ�������ɼ����ܷ�
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
//����λ
//�����������λ�ã������λ�õ�ֵ
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
//		printf("����");
//		return 1;
//	}
//	while (k)
//	{
//		scanf("%d", p);
//		p++;
//		k--;
//	}
//	scanf("%d%d", &x, &y);
//	if (x > 0 && x <= m && y > 0 && y <= n)  // ��������Ϸ����ж�
//	{
//		s = (x - 1) * n + y - 1;  // �������������߼�����1��ʼ����ת0��ʼ����
//		printf("%d", *(ret + s));
//	}
//	else
//	{
//		printf("�������곬����Χ");
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
//	}//�������
//	int x = 0, y = 0;
//	scanf("%d%d", &x, &y);
//	if (x > 0 && x <= n && y > 0 && y <= m)
//	{
//		printf("%d", arr[x - 1][y - 1]);
//	}
//	else
//	{
//		printf("�������곬����Χ");
//	}
//	return 0;
//
//}

//103
//����һ�����֣����һ������
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
//	}//�������
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
// ���ⲻ��ʹ�ûس�����д��
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
//�����ߵ�λ��
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
//	}//�������
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
//�ж����������Ƿ����
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
//	}//�������1
//	int arr2[10][10] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}//�������2
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

//����������
//int main() {
//    // ʹ�ÿ�ѧ��������ʾ������
//    double num1 = 1.23e4;  // 1.23 * 10^4
//    double num2 = 5.67E-3; // 5.67 * 10^-3
//
//    // ��ӡ������
//    printf("num1 = %e\n", num1); // ʹ��%e��ʽ��ӡ
//    printf("num2 = %E\n", num2); // ʹ��%E��ʽ��ӡ
//    return 0;
//}

//106
//�����Ǿ����ж�
//���ӶԽ������µ�Ԫ��λ��ȫΪ0
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
//	}//�������1
//	//�������Խ���
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
//����ת��
//��д��

//108
//���󽻻�
//����k�ν�����ľ��� 
//a b �л��н��н���
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
//	scanf("%d", &k);//��������
//	getchar();
//	int tm;
//	while (k)
//	{
//		scanf("%c %d %d", &x, &a, &b);//����ʲô����������������
//		switch (x)
//		{
//		case 'r'://��
//			for (j = 0; j < n; j++)
//			{
//				tm = arr[a-1][j];
//				arr[a-1][j] = arr[b-1][j];
//				arr[b-1][j] = tm;
//			}
//			break;
//		case 'c'://��
//			for (i= 0; i < n; i++)
//			{
//				tm = arr[i][a-1];
//				arr[i][a-1] = arr[i][b-1];
//				arr[i][b-1] = tm;
//			}
//			break;
//		default:
//			printf("�������\n");
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
//������� ����n�����ǰn�е���
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
////�������ж�
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
//	//�жϺ������Խ���
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