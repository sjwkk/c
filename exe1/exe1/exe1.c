#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1-20
//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？ 
//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	int i, j, k;
//	int count = 0;
//	for (i = 0; i < 4; i++)//确定百位
//	{
//		for (j = 0; j < 4; j++)//确定十位
//		{
//			if (arr[i] != arr[j])
//			{
//				for (k = 0; k < 4; k++)//确定个位
//				{
//					if (arr[k] != arr[i] && arr[k] != arr[j])
//					{
//						printf("%-3d ", arr[i] * 100 + arr[j] * 10 + arr[k]);
//						count++;
//					}
//				}
//			}
//		}
//		printf("\n");
//	}
//	printf("%d", count);
//	return 0;
//}

//企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；
// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
// 20万到40万之间时，高于20万元的部分，可提成5%；
// 40万到60万之间时,高于40万元的部分,可提成3%；
// 60万到100万之间时，高于60万元的部分可提成1.5%
// 高于100万元时，超过100万元的部分按1%提成
// 从键盘输入当月利润I，求应发放奖金总数？ 
//int main()
//{
//	long long int I;
//	int  a;
//	scanf("%lld", &I);
//
//	int b1, b2, b3, b4;
//	b1 = 100000 * 0.1;//10-20
//	b2 = 100000 * 0.075 + b1;//20-40
//	b3 = 100000 * 0.03 + b2;
//

	/*if (I <= 100000)
	{
		a = I * (0.1);
		printf("%d", a);
	}
	else if ( I <=200000)
	{
		a = 100000 * 0.1 + (I - 100000) * 0.75;
		printf("%d", a);
	}
	else if (I <= 400000)
	{
		a = 100000 * 0.1 +100000 * 0.75+(I-200000)*0.05;
		printf("%d", a);
	}
	else if (I <= 600000)
	{
		a = 100000 * 0.1 +100000 * 0.75 + 400000* 0.05+(I-600000)*0.015;
		printf("%d", a);
	}
	else if (I <= 1000000)
	{
		a = 100000 * 0.1 + 100000 * 0.75 + 400000 * 0.05 + 600000 * 0.015+;
		printf("%d", a);
	}*/
	/*return 0;
}*/

//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
//#include<math.h>
//int main()
//{
//	int x;
//	for (x = 1; x< 100000; x++)
//	{
//		int i = sqrt(x + 100);
//		int j = sqrt(x + 168);
//		if (i * i == (x + 100) && j * j == (x + 168))
//			printf("%d", x);
//	}
//	return 0;


//输入某年某月某日，判断这一天是这一年的第几天？ 
//int main() {
//	int y, m, d;
//	int j;
//	int count = 0;
//	scanf("%d%d%d", &y ,&m ,&d);
//	//判断是不是润年
//	
//	//是闰年1 3 5 7 8 10 12 -31
//		//2 -29
//		//4 6 9 11 -30
//		for (j = 1; j <m; j++)
//		{
//			if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
//			{
//				count += 31;
//			}
//			if (j == 4 || j == 6 || j == 9 || j == 11)
//			{
//				count += 30;
//			}
//			if (j==2&&((y % 4 == 0) && (y % 100 != 0)) || m % 400 == 0)
//			{
//				count += 29;
//			}
//		    if(j == 2 && (y % 4 != 0 ))
//			{
//				count += 28;
//			}
//		}
//		count += d;
//		printf("这是今年第%d天", count);
//	return 0;
//}


//输入三个整数x,y,z，请把这三个数由小到大输出。 
//int main()
//{
//	int arr[3] = { 0 };
//	scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
//	int i, j;
//	for (i = 1; i <3; i++)
//	{
//		for (j = 0; j < 3 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//输出9 * 9口诀。
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		} 
//		printf("\n");
//	}
//	return 0;
//}

//断101 - 200之间有多少个素数，并输出所有素数

//打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
//#include<math.h>
//int main()
//{
//	int b, s, g;
//	int x;
//	for (x = 100; x <= 999; x++)
//	{
//		b = x / 100;
//		g = x % 10;
//		s = x % 100 / 10;
//		if (pow(b,3) + pow(g,3) + pow(s,3) == x)
//			printf("%d  ", x);
//	}
//	return 0;
//}

//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		while (n != i)
//		{
//			if (n % i == 0)
//			{
//				printf("%d*", i);
//				n = n / i;
//			}
//			else
//				break;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}

//利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。 
//int main()
//{
//	int s;
//	char x;
//	scanf("%d", &s);
//	(s >= 90) ? (x = 'A') : ((s >= 60 && s <= 89) ? (x = 'B') : (x = 'C'));
//	printf("%c", x);
//	return 0;
//}

//入两个正整数m和n，求其最大公约数和最小公倍数。
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int k;
//	int max, min;
//	int m1 = m, n1 = n;
//	while (m%n!=0)
//	{
//		k = m % n;
//		m = n;
//		n = k;
//	}
//	max = n;
//	printf("最大公约数%d\n", max);
//	min = m1 * n1 / max;
//	printf("最小公倍数%d", min);
//		return 0;
//}

//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。 
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	/*scanf("%s", arr);*///会吸收
//	gets(arr);
//	int space = 0, al = 0, num = 0, other = 0;
//	int i=0;
//	while (arr[i] != '\0')
//	{
//		if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
//			al++;
//		else if (arr[i] == ' ')
//			space++;
//		else if (arr[i] >= '0' && arr[i] <= '9')
//			num++;
//		else
//			other++;
//		i++;
//	}
//	printf("%d %d %d %d ", space, al, num, other);
//	return 0;
//}

//=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时 
//共有5个数相加)，几个数相加由键盘控制。
#include<math.h>
//int main()
//{
//	int n,m;
//	scanf("%d%d", &n,&m);//几个数相加，输入的数字是
//	int s=0,j,i,tmp=0;
//	for (i = 1; i <=n; i++)
//	{
//		tmp = 0;
//		for (j = 0; j < i; j++)
//		{
//			tmp += pow(10, j) * m;
//		}
//		s = tmp + s;
//	}
//	printf("%d", s);
//	return 0;
//}
//注意到，每个数都是前一个数*10+2
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int i, tmp = 0, sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + 2;
//		sum += tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在 
//第10次落地时，共经过多少米？第10次反弹多高？
#include<math.h>
//int main()
//{
//	float n = 100;//开始的hig就是n
//	float hig = 100;float  s = 0;//高度和经过的路程
//	int i = 1;
//	for (i = 1; i < 10; i++)//每次弹起后到落下前
//	{
//		s = s + n ;
//		n =n / 2;
//		hig = hig / 2;
//	}
//	//hig = hig/ pow(2 ,10);
//	hig=hig / 2;
//	s += 100;
//	printf("%f %f",hig,s );
//	return 0;

//{
//	float sn = 100.0, hn = sn / 2;
//	int n;
//	for (n = 2; n <= 10; n++)
//	{
//		sn = sn + 2 * hn;/*第n次落地时共经过的米数*/
//		hn = hn / 2; /*第n次反跳高度*/
//	}
//	printf("the total of road is %f\n", sn);
//	printf("the tenth is %f meter\n", hn);
	


//21
//吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个 
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
//int rew(int day)
//{
//	int count;
//	if (day == 1)
//	{
//		count = 1;
//		return count;
//	}
//	else if (day > 1)
//	{
//		day--;
//		count = (rew(day) + 1) * 2;
//		return  count;
//	}
//}
//int main( )
//{
//	int day = 10;
//	int count1 = 1;
//	int rew(int);
//	int count = rew(day);
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;/*第一天的桃子数是第2天桃子数加1后的2倍*/
//		x2 = x1;
//		day--;
//	}
//	printf("the total is %d\n", x1);
//	return 0;
//}

//两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
//已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出 三队赛手的名单
//int main()
//{
//	char i, j, k;//a,b,c的对手
//	for (i = 'y'; i <= 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			if (i != j)
//			{
//				if (j != 'y' && i != 'y')
//					printf("a->%c\nb->%c\nc->%c", i, j, 'y');
//			}
//		}
//	}
//	return 0;
//}


//印出如下图案（菱形） 
//        0123456
	    //---*---1
		//--***--2
		//-******-3
		//********4
		// ******5
		//  ***6
//		//   *7
//int main()
//{
//	char arr[8]="-------";
//	int i, j;
//	for (i = 1; i <= 4; i++)//控制多少行
//	{
//		for (j = 0; j < 7; j++)//控制每行
//		{
//			if (arr[j] != '*')
//			{
//				if (j >= (3 - (i * 2 - 2) / 2) && j <= (3 + (i * 2 - 2) / 2))
//				{
//					arr[j] = '*';
//				}
//			}
//		}
//		printf("%s\n", arr);
//	}
//	for (i=3; i>0; i--)//控制多少行
//	{
//		for (j = 0; j < 7; j++)//控制每行
//		{
//			arr[j] = '-';
//			if (j >= (3 - (i * 2 - 2) / 2) && j <= (3 + (i * 2 - 2) / 2))
//			{
//				arr[j] = '*';
//			}
//		}
//		printf("%s\n", arr);
//	}
//	return 0;
//}

