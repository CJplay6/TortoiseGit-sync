#include <stdio.h>

/* 函数指针 */

typedef void (*myfunc)(int, int);   /*  方式一：自定义函数指针类型  */

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

void test02(void (*func)(int, int))
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