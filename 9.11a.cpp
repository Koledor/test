#include<iostream>
using namespace std;
int main()
{
	int a=10;
	cout << "a的值是" << a << endl;
	int* p;//定义一个整型指针变量p，格式是：数据类型* 指针变量名
	p = &a;//将变量a的地址赋给指针变量p，格式是：指针变量名= & 变量名
	cout << "a的地址是" << &a << endl;
	cout << "p的值是" << p << endl;
	*p = 20;//通过加*来解引用，指针变量p给变量a赋值，格式是：* 指针变量名=值
	cout << "a的值是" << a << endl;
	return 0;
}