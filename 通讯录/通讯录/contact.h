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
//��̬
//struct Contact
//{
//	int count;
//	struct Peo data[100];
//};
struct Contact
	{
		int count;
		struct Peo* data;
		//��ǰͨѶ¼����
		int capacity;
	};

//����
void InitContact(struct Contact* pc);
//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);
//������ϵ��
void Addcontact(struct Contact* pc);
void Show(const struct Contact* pc);
void Del(struct Contact* pc);
void Savec(struct Contact*);
void DESTROY(struct Contact* pc);