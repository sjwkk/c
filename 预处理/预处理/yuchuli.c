#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
// .c�ļ� Ԥ����/���� ��� ���� .exe�ļ�
//Ԥ�������

//Ԥ�������

//__FILE__ //���б�����ļ�
//__LINE__ ��һ��
//__DATE__ ��ӡ����
//__STDC__ �����������ѭANSIC ��ֵΪ1������δ����
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
//		//File:E:\vscode\bilibili-c\Ԥ����\Ԥ����\yuchuli.c  line =16   Data:Dec 19 2024   Time:18:13:37   i=0
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%d", __STDC__);//δ���壬����ѭ
//	return 0;
//}

//�����ʶ��
//#define MAX 1000//���ܼӷֺ�
//#define STR "hello"//���Զ������
//#define print printf("hehe\n")
//#define CASE break;case
////һ�д���̫����ʹ������\
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

//define �����
//        ����       ִ�е�����
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


//#��##
//#define PRINT(N) printf("the value of " #N " is %d\n",N)
//int main()
//{
//	//printf("hello""world");
//	int a = 10;
//	PRINT(a);//#N���滻��"a" �Ѳ������뵽�ַ�����
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

//##�����ߵķ��źϳ�һ������
//#define CAT(Class,Num) Class##Num
//int main()
//{
//	int Class106 = 100;
//	printf("%d", CAT(Class, 106));//��Class ��106�����һ��
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//���и����õ�
//}
//�и����� ���ʽ���������ԵĽ��
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	//int m = MAX(2, 3);
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++, b++);//��ʹ��a��++
//	printf("%d ", m);//6
//	printf("%d ", a);//7
//	printf("%d ", b);//5
//	return 0;
//}
//��ļ���Ч�ʸ���
//�����㹻��ʹ�ú꣬�����ʹ�ú���

//#undef ȡ����