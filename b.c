#include <stdio.h>

/* ����ָ�� */

typedef void (*myfunc)(int, int);   /*  ��ʽһ���Զ��庯��ָ������  */

void function1(int a, int b)
{
	printf("%d\n", a + b);
}

void function2(int a, int b)
{
	printf("%d\n", a - b);
}

void test01(myfunc func)
{
	int a = 20;
	int b = 30;
	func(a, b);	
}

void test02(void (*func)(int, int))   /*  ��ʽ���� ֱ���ں����β��ж���һ������ָ�� */
{
	int a = 20;
	int b = 30;
	func(a, b);
}

int main(void)
{
	printf("funcpoint\n");
	test01(function1);
	test02(function2);
	return 0;
}