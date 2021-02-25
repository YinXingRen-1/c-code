#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	/*char i = 'c';
//	unsigned int a = "0X3";
//	unsigned int b = "0x4";
//	unsigned int c = "010";
//	printf("%#X %X %#x %x %#o %o",a, a, b, b, c, c);*/
//	//printf("%c", '\061');
//
//	//printf("%c\n", i);
//	return 0;
//}
//int main()
//{
//	/*float input;
//	scanf("%f", &input);
//	printf("%.4f\n%e\n%a\n", input, input, input);*/
//	/*char ch = '\a';
//	printf("%c", ch);
//	printf("Starled by the sudden soude, Sally shouted, \n");
//	printf("\"By the Great Pumpkin, what was that!\"\n");*/
//	//int input;
//	//printf("Enter a value of char int ASCII\n");
//	//scanf("%d", &input);
//	//printf("You input value is %d,and char is %c\n", input, input);
//
//
//	return 0;
//}
//#define SEC_PER_YEAR 3.156e7
//int main()
//{
//	/*float second, year;
//	printf("Enter how many years old you are:");
//	scanf("%f", &year);
//	second = year * SEC_PER_YEAR;
//	printf("You are:%.1f years old\n", year);
//	printf("And you are %e seconds old,too.\n", second);*/
//	char name[40];
//	char surname[40];
//	int wname, wsurname, w;
//	printf("Please input your first name:");
//	scanf("%s", name);
//	printf("Please input your first name:");
//	scanf("%s", surname);
//	printf("Hello, %s,%s\n", name, surname);
//	wname = printf("%s", name);
//	w = printf("  ");
//	wsurname = printf("%s", surname);
//	printf("\n%*d  %*d\n", wname, wname, wsurname, wsurname);
//	int a = wname + w;
//	printf("%s  %s\n", name, surname);
//	printf("%d%*d\n", wname, a, wsurname);
//
//
//	return 0;
//}
//int main()
//{
//	/*int i = 0;
//	while (++i < 3)
//		printf("%d", i);
//	printf("\n");//1 2
//	int a = 0;
//	while (a++ < 3)
//	printf("%d", a);//1 2 3
//	printf("\n");*/
//	char i = 'a';
//	char ii = 'g';
//	//while (i++ < ii)
//	//pintf("%c ", i);//bcdefg
//	//while (i < ii)
//		//printf("%c", i++);//abcdef
//	//while (++i < ii)
//		//printf("%c", i);//bcdef
//	while (i < ii)
//		printf("%c", ++i);//bcdefg
//	return 0;
//}
int main()
{
	/*int i, ii;
	scanf("%d", &i);
	ii = i + 10;
	while (i <= ii)
	printf("%d ", i++);
	return 0;*/
	/*int i, ii, iii;
	scanf("%d", &i);
	while (i>=7)
	{
		ii = i / 7;
		iii = i % 7;
		printf("%d days is %d weeks, %d days\n", i, ii, iii);
		scanf("%d", &i);
	}*/
	/*int i = 0;
	int count = 0;
	scanf("%d", &i);
	while (i > 0)
	{
		i--;
		count++;
	}
	printf("You are total get $%d\n", count);*/
	int sum = 0;
	int count = 0;
	scanf("%d", &count);
	while (count > 0)
	{
		sum += count * count;
		count--;
	}
	printf("You are total get $%d\n", sum);

	return 0;
	
}