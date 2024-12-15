#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
#include<stdlib.h>
#include<errno.h>

void Load(struct Contact* pc)
{
	FILE* pf;
	pf=fopen("con.txt", "rb");
	//�ȶ����������ڷ�
	struct Peo tmp = { 0 };
	while(fread(&tmp,sizeof(struct Peo),1,pf)==1);//���سɹ������ĸ���
	{
		pc->data[pc->count] = tmp;
		pc->count++;
	}
	fclose(pf);
}
//��̬
//void InitContact(struct Contact* pc)
//{
//	assert(pc);//��ֹ��ָ��
//	pc->count = 0;
//	memset(pc->data, 0,sizeof(pc->data ));//�����ڴ棬ʹÿһ����Ϊ0
//	//�����ļ���Ϣ���ṹ��
//	Load(pc);
//
//}


//dongtai
void InitContact(struct Contact* pc)
{
	assert(pc);//��ֹ��ָ��
	pc->count = 0;
	pc->data =(struct Peo* ) calloc(3, sizeof(struct Peo));//���ٲ��ҳ�ʼ��
	if (pc->data == NULL)
	{
		printf("InitContact:%s\n", strerror(errno));
	}
	pc->capacity = DEF;//����
	//�����ļ���Ϣ���ṹ��
	Load(pc);

}
//void Addcontact(struct Contact* pc)
//{
//	assert(pc);
//	if (pc->count == MAX)
//	{
//		printf("����\n");
//		return;
//	}
//	printf("����������\n");
//	scanf("%s", pc->data[pc->count].name);
//	printf("����������\n");
//	scanf("%d", &pc->data[pc->count].age); 
//	printf("�������Ա�\n");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("������绰\n");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("�������ַ\n");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//}

//��̬����
void Check(struct Contact* pc)
{
	if (pc->count == pc->capacity)
	{
		struct Peo* ptr = realloc(pc->data, (pc->capacity + ADE) * sizeof(struct Peo));
		if (ptr == NULL)
		{
			printf("Addcontact:%s\n", strerror(errno));
		}
		else
		{
			pc->data = ptr;
			pc->capacity += ADE;
			printf("����cg\n");
		}
	}
}
//����
void DESTROY(struct Contact* pc)
{
	asseer(pc);
	free(pc->data);
	pc->data = NULL;
}

void Addcontact(struct Contact* pc)
{
	assert(pc);
	Check(pc);
	printf("����������\n");
	scanf("%s", pc->data[pc->count].name);
	printf("����������\n");
	scanf("%d", &pc->data[pc->count].age);
	printf("�������Ա�\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ\n");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
}

void Show(const struct Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%3d\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");//-����� 
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%3d\t%5s\t%12s\t%30s\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindByname(struct Contact* pc, char name[])
{
		assert(pc);
		int i = 0;
		for (i = 0; i < pc->count; i++)
		{
			if (strcmp(pc->data[i].name, name) == 0)
				return i;
			else
				return - 1;
		}
}

void Del(struct Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫɾ���˵�����\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int pos=FindByname(pc, name);
	if (pos == -1)
		printf("Ҫɾ�����˲�����\n");
	int i = 0;
	for (i = pos; i < pc->count-1; i++)//��ֹԽ��
	{
		pc->data[i] = pc->data[i + 1];
		pc->count--;
		printf("ɾ���ɹ�\n");
	}


}
void Savec(struct Contact* pc)
{
	FILE* pfin = fopen("con.txt", "wb");
	if (pfin == NULL)
	{
		printf("����\n");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(struct Peo),1, pfin);
	}
	fclose(pfin);

}