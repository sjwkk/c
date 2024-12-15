#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
#include<stdlib.h>
#include<errno.h>

void Load(struct Contact* pc)
{
	FILE* pf;
	pf=fopen("con.txt", "rb");
	//先读到变量，在放
	struct Peo tmp = { 0 };
	while(fread(&tmp,sizeof(struct Peo),1,pf)==1);//返回成功读到的个数
	{
		pc->data[pc->count] = tmp;
		pc->count++;
	}
	fclose(pf);
}
//静态
//void InitContact(struct Contact* pc)
//{
//	assert(pc);//防止空指针
//	pc->count = 0;
//	memset(pc->data, 0,sizeof(pc->data ));//设置内存，使每一个都为0
//	//加载文件信息到结构体
//	Load(pc);
//
//}


//dongtai
void InitContact(struct Contact* pc)
{
	assert(pc);//防止空指针
	pc->count = 0;
	pc->data =(struct Peo* ) calloc(3, sizeof(struct Peo));//开辟并且初始化
	if (pc->data == NULL)
	{
		printf("InitContact:%s\n", strerror(errno));
	}
	pc->capacity = DEF;//容量
	//加载文件信息到结构体
	Load(pc);

}
//void Addcontact(struct Contact* pc)
//{
//	assert(pc);
//	if (pc->count == MAX)
//	{
//		printf("已满\n");
//		return;
//	}
//	printf("请输入名字\n");
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄\n");
//	scanf("%d", &pc->data[pc->count].age); 
//	printf("请输入性别\n");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话\n");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址\n");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//}

//动态增容
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
			printf("增容cg\n");
		}
	}
}
//销毁
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
	printf("请输入名字\n");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄\n");
	scanf("%d", &pc->data[pc->count].age);
	printf("请输入性别\n");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址\n");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
}

void Show(const struct Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%3d\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");//-左对齐 
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
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要删除人的名字\n");
	char name[20] = { 0 };
	scanf("%s", name);
	int pos=FindByname(pc, name);
	if (pos == -1)
		printf("要删除的人不存在\n");
	int i = 0;
	for (i = pos; i < pc->count-1; i++)//防止越界
	{
		pc->data[i] = pc->data[i + 1];
		pc->count--;
		printf("删除成功\n");
	}


}
void Savec(struct Contact* pc)
{
	FILE* pfin = fopen("con.txt", "wb");
	if (pfin == NULL)
	{
		printf("错误\n");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(struct Peo),1, pfin);
	}
	fclose(pfin);

}