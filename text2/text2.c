#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int num2 = 20;//ȫ�ֱ���
int main()
{
	/*������*/
	extern int g_val;
	printf("%d\n", g_val);
	/*��������*/
	{
		int a = 10;
		printf("%d\n", a);
	}
	//int num1 = 10;//�ֲ�����
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);	//�������
	int num = 0;
	num = num1 + num2;
	printf("num= %d\n", num);		//������
	return 0;
}
