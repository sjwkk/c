#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#define MAX 100
#define DEF 3
#define ADE 2
struct Peo
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
	char addr[30];
};
//静态
//struct Contact
//{
//	int count;
//	struct Peo data[100];
//};
struct Contact
	{
		int count;
		struct Peo* data;
		//当前通讯录容量
		int capacity;
	};

//增容
void InitContact(struct Contact* pc);
//初始化通讯录
void InitContact(struct Contact* pc);
//增加联系人
void Addcontact(struct Contact* pc);
void Show(const struct Contact* pc);
void Del(struct Contact* pc);
void Savec(struct Contact*);
void DESTROY(struct Contact* pc);