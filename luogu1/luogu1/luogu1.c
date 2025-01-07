#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//输入长度为n的一个正整数序列，要求输出序列中最长连号的长度。
//连号指在序列中，从小到大的连续自然数。
//int main()
//{
//
//	return 0;
//}


#include<string.h>
void print(char b[100])
{
	int i=0, j=0;
	while (b[i] != '\0')
	{
		//输出每一个
		if (b[i]!= ' ')
		{
			printf("%c", b[i]);
		}
		else
		{
			printf("\n");
		}
		i++;
	}
}
void fen(char arr1[200])
{
	//char* p[200];//把每个单词放到这个数组中
	char p[][20] = { 0 };
	char* s[3] = {"a","the","is"};//指针数组 存放多个字符串
	int i=0 , j=0,k=0;
	int p_count[] = { 0 };
	while (arr1[i] != '\0')
	{
		if (arr1[i] != ' ')
		{
			p[k][j] = arr1[i];
			j++;
		}
		if (arr1[i] == ' ')
		{
			k++;
			j = 0;
		}
		i++;
	}
	
	for (i = 0; i<k+1; i++)
	{
		printf("%s", p[i]);
		printf("\n");  
	}
}

int main()
{
	void print(char []);
	void fen(char []);
	char arr1[200] = { 0 };
	char arr2[100] = { 0 };
	char* p[100] = { 0 };//假定有100个单词
	gets(arr1);
	gets(arr2);
	/*printf("第一句所有单词\n");
	print(arr1);
	printf("第二句所有单词\n");
	print(arr2);*/
	int i = 0;
	while (1)
	{
		if (arr1[i] == '\0')
		{
			arr1[i] = ' ';
			break;
		}
		i++;
	}
	strcat(arr1, arr2);//连接后就形成了一句新的话
	fen(arr1);
	return 0;
}

