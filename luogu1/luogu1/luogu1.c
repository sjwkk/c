#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//���볤��Ϊn��һ�����������У�Ҫ���������������ŵĳ��ȡ�
//����ָ�������У���С�����������Ȼ����
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
		//���ÿһ��
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
	//char* p[200];//��ÿ�����ʷŵ����������
	char p[][20] = { 0 };
	char* s[3] = {"a","the","is"};//ָ������ ��Ŷ���ַ���
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
	char* p[100] = { 0 };//�ٶ���100������
	gets(arr1);
	gets(arr2);
	/*printf("��һ�����е���\n");
	print(arr1);
	printf("�ڶ������е���\n");
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
	strcat(arr1, arr2);//���Ӻ���γ���һ���µĻ�
	fen(arr1);
	return 0;
}

