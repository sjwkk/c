#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//12
//130
//int main()
//{
//	int n ,i,k;
//	int arr[100]={0};
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &k);
//	int count = 0;
//	for (i = 0;i < n; i++)
//	{
//		if (arr[i] == k)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//131
//���printf9=("hello")
//int main()
//{
//	printf("printf(\"hello\\n\")\n");//ת��
//	printf("cout<<\"hello\"<<end;\n");
//	return 0;
//}

//132
//��������������(ֻ�ܱ�1�ͱ�������)
//ʹ�ú�������ֵ
//#include<math.h>
//int is_prime(int x)
//{
//	int j;
//	for (j =2; j < sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//133
//ȥ���ظ�������������
//int main()
//{
//	int n,i,j,z;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
	//����ר��ʵ��ȥ��
	//for (i = 0; i < n - 1; i++)
	//{
	//	
	//	if (arr[i] == arr[i + 1])
	//	{
	//		int k = 0;
	//		for (k = i; i < n - 1; k++)
	//		{
	//			arr[k] = arr[k + 1];
	//		}
	//		n--;//������������
	//		i--;//�ص���һ�������Ƚ�
	//	}
	//}
	//ȥ����ð��������ʵ��
	/*for (i = 0; i < n-1; i++)
	{
		for (j = 0; j <n - 1 - i; j++)
		{
			if (arr[j] > arr[j+ 1])
			{
				z = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = z;
			}
			else if (arr[j] == arr[j + 1])
			{
				arr[j + 1] = -1;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if(arr[i]>0)
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//�ⷨ2
//int main()
//{
//	int n = 0;
//	int i,m;
//	int arr[1001] = { 0 };
//	//�����ַŵ���Ӧ�±��������,����������ֱ��ȥ��
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = m;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if(arr[i]>0)
//		printf("%d ", arr[i]);
//	}
//}

//134
//����������,ɾ�����ݣ��������
//#include<stdlib.h>
//
//struct Node//������
//{
//	int data;//������
//	struct Node* next;//ָ����
//};
//int main()
//{
//	struct Node* list = NULL;//��ָ�������ָ��
//	struct Node* tail = NULL;//ָ������β����
//	//����
//	int n,m;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		//����n���ֲ����뵽
//		struct Node* pn =(struct Node*) malloc(sizeof(struct Node));//�����ڴ�
//		pn->data = m;
//		pn->next = NULL;
//		//�����һ��Ԫ��
//		if (list == NULL)
//		{
//			list = pn;
//			tail = pn;
//		}
//		else
//		{
//			tail->next = pn;
//			tail = pn;
//		}
//	}
//	//Ҫɾ����Ԫ��
//	int d;
//	scanf("%d", &d);
//	//ɾ��
//	struct Node* cur = list;
//	struct Node* prev =NULL;
//	while (cur)
//	{
//		if (cur->data == d)
//		{
//			//ɾ��
//			//ɾ��������ǵ�һ�����
//			struct Node* pd = cur;
//			
//			if (cur == list)
//			{
//				list = list->next;
//				cur = list;
//			}
//			else
//			{
//				prev->next= cur = cur->next;
//				cur = prev->next;
//
//			}
//			free(pd);
//			n--;
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	printf("%d\n", n);
//	cur = list;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	//�ͷ�
//	cur = list;
//	struct Node* del = NULL;
//	while (cur)
//	{
//		
//	}
//	return 0;
//}

