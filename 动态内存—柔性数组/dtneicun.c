#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//malloc
//�����ڴ��
//�����ڴ��п���ʧ�ܣ�����ʧ�ܷ��ؿ�ָ��
//���ڶ����������
//�䳤����-����ָ����С���ñ���
//int main()
//{
//	//��̬�ڴ�
//	//int* p = malloc(INT_MAX);Not enough space
//	int* p = malloc(40);//����40���ֽ�;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ٳɹ���ʹ��
//	//�����˳�ʱ���Զ�����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//	
//		printf("%d ", *(p + i));
//	}
//	free(p);//��ֹp��ΪҰָ��
//	return 0;
//}

//calloc
//int main()
//{
//	int * p=calloc(10, 4);//���ٲ��ҳ�ʼ��Ϊ0
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	free(p);
//	return 0;
//}

//realloc
//int main()
//{
//	int * p=malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//
//	}
//	//����
//	int * p1=realloc(p, 8000);//׷�ӵ�8000,��ַ�ᷢ���仯
//	if (p1 != NULL)
//	{
//		p = p1;
//	}
//	//ʹ��
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d", *(p + i));
//
//	}
//	free(p);
//	return 0;
//} 
//realloc(NULL,40)==malloc(40)


//�����Ǵ�������
//void test()
//{
//	int* p = (int*)malloc(100);
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)//�����ڴ�й¶
//		return ;
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ֹ��ָ��
//		return 1;
//	}
	//int i;
	//for (i = 0; i <= 10; i++)//Խ�����
	//{
	//	p[i] = i;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p = i;
	//	p++;
	//}
	//free(p);//ʹ��free�ͷŲ��ֿռ�

	//free(p);//��ͬһ�鶯̬�ڴ����ͷ�
	//free(p);

	//return 0;
//}

//��������
struct S
{
	int i;
	int arr[ ];//���������Ա
};
int main()
{
	//int sz = sizeof(struct S);
	//printf("%d", sz);//Ϊint�Ĵ�С

	//ʹ��
	struct S* ps=(struct S*)malloc(sizeof(struct S) + 40);//����44���ֽڣ���40���ֽ��Ǹ�arr
	if (ps == NULL)
	{
		printf("%s", strerror(errno));
		return 1;
	}
	//psָ��ľ��ǽṹ��
	ps->i = 100;//����ֻ����100
	int n = 0;
	for (n = 0; n < 10; n++)
	{
		ps->arr[n] = n;
		printf("%d", ps->arr[n]);
	}
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);//���ٵ�80���ֽ�
	if (ptr != NULL)
	{
		ps = ptr;
	}
	free(ps);
	ps = NULL;
	return 0;
}