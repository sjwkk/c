#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp_int(const void* e1, const void* e2)//void* ָ�벻��ֱ�ӽ�����//void* ָ�룬�޾������ͣ����Խ����������͵ĵ�ַ�����ܽ����ò�����Ҳ���ܽ���+-���� 
{
		//return (*(int*)e1 - *(int*)e2);//������
		return (*(int*)e1 - *(int*)e2);//�ǽ���
		//���� ���ش���0
		//���� ����0
		//С�� ����С��1
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp;
		tmp = *buf1;//�����ֽ�
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++; buf2++;//��Ԫ�ص�ַ+1

	}
}
void sort(void* arr,int sz, int width,int (*cmp)(const void* elem1, const void* elem2))
//ȷ��ÿ��Ԫ�ص�λ��
{
	//����sz-1��
	int i,j;
	
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//�����������ź����
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ( cmp(  (char*)arr+j*width , (char*)arr + (j +1)* width )  > 0)//ǿ��ת��Ϊchar*����
			{
				Swap( (char*)arr + j * width ,  (char*)arr + (j + 1) * width , width );//���Ƚϵ�Ԫ�صĵ�ַ����ʵ�ǵ�j�����ݵ��׵�ַ����Ϊ�����ڵ����Ծ�ȷ����λ��
				flag = 0;
			}
		}
		if (flag==1)
			break;//���������Ч��
	}
}
//qsort
//void qsort(void* base, //Ҫ�Ƚϵ����ݵ���ʼλ��
//	size_t num, //�����������Ԫ�ظ���
//	size_t width, //����Ԫ�صĴ�С
//	int(* compare)(const void* elem1, const void* elem2)//����ָ�룬�ȽϺ���
//
//);

//�Ƚ���������Ԫ��

void test3()
{
	int arr[] = { 3,8,7,9,4,5,6,1,2,0 };
		//�������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
		//sort(arr, sz);
	sort(arr, sz, sizeof(arr[0]), cmp_int);//���飬��С��ÿ�����ݵĴ�С���������ͱ����ȽϺ���
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
//		//�������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		//sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//���飬��С��ÿ�����ݵĴ�С���������ͱ����ȽϺ���
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
//	//����������
//	return strcmp(((struct STU*)e1)->name, ((struct STU*)e2)->name);
//}
//void test2()
//{
//	struct STU s[] = { {"����",15},{"����",30},{"����",25} };
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

