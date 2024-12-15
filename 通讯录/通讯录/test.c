#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

enum Option
{
	EXIT,
	ADD,
	DEL
};
void menu()
{
	printf("1.add   2.del  3.search  4.modify  5.show 6.sort\n");
	printf("0.exit\n");
}

int main()
{
	struct Contact con ;
	InitContact(&con);//初始化通讯录
	int count = 0;//记录通讯录的内容数量
	int input;

	do
	{
		menu();
		printf("请选择\n");
		
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Addcontact(&con);
			break;
		case DEL:
			Del(&con);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			Show(&con);
			break;
		case 6:
			break;
		case EXIT:
			DESTROY(&con);
			Savec(&con);
			break;
		}
	} while (input);
	return 0;
}