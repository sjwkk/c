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
//输出printf9=("hello")
//int main()
//{
//	printf("printf(\"hello\\n\")\n");//转义
//	printf("cout<<\"hello\"<<end;\n");
//	return 0;
//}

//132
//求质数（素数）(只能被1和本身整除)
//使用函数返回值
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
//去掉重复的整数并排序
//int main()
//{
//	int n,i,j,z;
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
	//可以专门实现去重
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
	//		n--;//数组总数变少
	//		i--;//回到第一个继续比较
	//	}
	//}
	//去重在冒泡排序中实现
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

//解法2
//int main()
//{
//	int n = 0;
//	int i,m;
//	int arr[1001] = { 0 };
//	//把数字放到对应下标的数组中,可以排序并且直接去重
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
//链表保存数据,删除数据，输出数据
//#include<stdlib.h>
//
//struct Node//链表结点
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};
//int main()
//{
//	struct Node* list = NULL;//是指向链表的指针
//	struct Node* tail = NULL;//指向链表尾部的
//	//输入
//	int n,m;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		//接受n数字并插入到
//		struct Node* pn =(struct Node*) malloc(sizeof(struct Node));//开辟内存
//		pn->data = m;
//		pn->next = NULL;
//		//插入第一个元素
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
//	//要删除的元素
//	int d;
//	scanf("%d", &d);
//	//删除
//	struct Node* cur = list;
//	struct Node* prev =NULL;
//	while (cur)
//	{
//		if (cur->data == d)
//		{
//			//删除
//			//删除的如果是第一个结点
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
//	//释放
//	cur = list;
//	struct Node* del = NULL;
//	while (cur)
//	{
//		
//	}
//	return 0;
//}

