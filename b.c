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

void test02(void (*func)(int, int))   /*  方式二： 直接在函数形参中定义一个函数指针 */
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