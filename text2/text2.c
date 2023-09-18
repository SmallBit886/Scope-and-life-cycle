#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int num2 = 20;//全局变量
int main()
{
	/*作用域*/
	extern int g_val;
	printf("%d\n", g_val);
	/*生命周期*/
	{
		int a = 10;
		printf("%d\n", a);
	}
	//int num1 = 10;//局部变量
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);	//输入语句
	int num = 0;
	num = num1 + num2;
	printf("num= %d\n", num);		//输出语句
	return 0;
}
