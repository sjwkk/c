#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//2��������������Ҫ���������ֵ�ϴ��ߡ�Ҫ���ú������ҵ�������
// ��Ŀ������
//int main()
//{
//	int MAX(int, int);
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int max = MAX(x, y);
//	printf("%d", max);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	int max;
//	/*if (x > y)
//		max = x;
//	else
//		max = y;*/
//	max = x > y ? x : y;
//	return max;
//}

//дһ���ж������ĺ�������������������һ������������Ƿ�Ϊ��������Ϣ��
//������ֻ��1��������
//#include<math.h>
//int main()
//{
//	void sushu(int);
//	int x;
//	scanf("%d", &x);
//	sushu(x);
//	return 0;
//}
//void sushu(int x)
//{
//	int i;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			printf("��������");
//			return 0;
//		}
//	}
//	printf("������");
//}

//��������Ƕ�׶���
//�����ݹ� ��5��ѧ��������
//int main()
//{
//	int agename(int);
//
//	int x = agename(5);
//	printf("%d", x);
//	return 0;
//}
//int agename(int x)
//{
//	int age;
//	if (x == 1)
//		age = 10;
//	else
//		age = agename(x - 1) + 2;
//	return age;
//}

//�� �õݹ鷽��
//int main()
//{
//	int fn(int);
//	int x;
//	scanf("%d", &x);
//	int res = fn(x);
//	printf("%d", res);
//	return 0;
//}
//int fn(int x)
//{
//	int res;
//	if (x ==1)
//		res = 1;
//	else if(x>1)
//		res = fn(x - 1) * x;	
//	return res;
//}

//쳲���������
//int main()
//{
//	int fac(int);
//	int x;
//	scanf("%d", &x);
//	int res = fac(x);
//	printf("%d", res);
//	return 0;
//}
//int fac(int x)
//{
//	int res;
//	if (x == 1 || x == 2)
//		res = 1;
//	else if (x > 2)
//	{
//		res = fac(x - 1) + fac(x - 2);
//	}
//	return res;
//}

//�ݹ鷴������ַ��� ABCD#������ַ�����DCBA
//int main()
//{
//	void nixu(char[]);
//	char arr[] = "ABCD#";//strlen-5 sizeof-6
//	nixu(arr);
//
//	return 0;
//}
//void nixu(char* arr)
//{
//	if ((*arr) != '#')
//	{
//		nixu(arr + 1);
//		printf("%c", *arr);
//	}
//}

//��������������ֵ
//int main()
//{
//	void swap(int*, int*);
//	int x = 3;
//	int y = 4;
//	swap(&x, &y);
//	printf("%d %d", x,y);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int z;
//	z = *x;
//	*x = *y;
//	*y = z;
//}

//����ָ��
//int (*p) []
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int i, j;
	//for (i = 0; i < 2; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ", *(a[i] + j));
	//		//*(a+i)=a[i]
	//		//*(a[i]+j)=a[i][j]
	//	}
	//	printf("\n");
	//}
	//printf("%d", *(*(a+1)+0));
	//������ָ��
	/*int* p = NULL;
	for (p=&a[0][0]; p < a[0] + 6; p++)
	{
		printf("%d ", *p);
	}*/
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 1,3,5,7,9,11,13,15,17,19,21,23 };
//	int (*p)[4] = a;
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			/*printf("%d ",*(*(p + i) + j));*/
//			printf("%d ", (*(p + i))[j]);
//	//�� C �����У� [] ����������±�������������ȼ����� * ���������������
//	// ���Ա��ʽ (p + i)[j] ʵ���ϵȼ��� *(p + i + j)
//return 0;
//}


//��һ���࣬3��ѧ������ѧ4�ſΣ�������ƽ�������Լ���n��ѧ���ĳɼ�
//int main()
//{
//	int a[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
//	//void search(int (*p )[],int );//��ַ
//	void ave(int *);
//	//search(a,2);
//	printf("\n");
//	ave(*a);//��ʹ��*aʱ����ʵ�����ǽ���ά����a��Ϊһ��һά����a[0]��ȡ����Ԫ�صĵ�ַ��
//	return 0;
//}
//void ave(int* m)
//{
//	int* n = m+11;
//	for (; m<=n ; m++) 
//	{
//		printf("%d ", *m);
//	}
//}
//void search(int (*p)[4], int x)//ֻ����һ�еĵ�ַ
//{
//	int j;
//	for (j = 0; j < 4; j++)
//	{
//		printf("%d ",*(*(p+x-1)+j));
//	
//}



//�ַ���ָ��
//int main()
//{
//	char str[8] = "abcdefg";
//	//printf("%c", str[6]);//g
//	//string[]�����ַ����������޸���������
//	// * stringָ���ַ��������Զ�ȡ�ַ������������ǲ��ܸı���ָ���ַ�������
//	char* s = "abcdf";
//	printf("%s\n", s);
//	printf("%c",*( s + 1));
//	return 0;
//}

//�ַ�������
//#include<string.h>
//int main() {
//	char a[] = "I ama boy.";
//	char b[] = "hello";
//	char* p1 = a, * p2 = b;
//	//��b�����ݸ��Ƶ�a
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++, p2++;
//	}
//	*p1 = '\0';
//	printf("%s\n", a);
//	printf("%d", strlen(a));
//	return 0;
//}

//�ú�������ʵ���ַ����ĸ��ơ����庯��mystrcpy �ַ�������������.�ַ�ָ�����������
//int main()
//{
//	void mystrcpy(char* ,char*);
//	char a[] = "abcdef ";
//	char b[] = "ghijk";
//	char* p1 = a, * p2 = b;
//	mystrcpy(a, b);
//	printf("%s", a);
//	return 0;
//}
//void mystrcpy(char* a, char* b)
//{
//	for (; *b != '\0'; b++,a++)
//	{
//		*a = *b;
//	}
//	*a = '\0';
//}

//�ú�������ʵ���ַ���������strcat
//int main()
//{
//	void mystrcat(char*, char*);
//	char a[100] = "abcdef";
//	char b[] = "ghijk";
//	mystrcat(a, b);
//	printf("%s", a);
//	return 0;
//}
//void mystrcat(char* a, char* b)
//{
//	//�ҵ�ĩβȻ�����
//	while (*a != '\0')
//	{
//		a++;
//	}
//	for (; *b != '\0'; b++)
//	{
//		*a = *b;
//		a++;
//	}
//	*a = '\0';
//}



// //ָ������
//int *p []
//ʹ����ָ������������
//int main()
//{
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int* p[2];
//	p[0] = a;
//	p[1] = a + 1;
//	int  i,j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������ַ���
int main()
{
	char* p[5] = {"I am a student","I choose a course" ,
	"My score is 96" ,"Good job","Keep going"};
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s \n"	, p[i]); //�����ָ����ַ������׵�ַ
	}
	return 0;
}
