#include<iostream>
using namespace std;
//1.返回局部变量的引用，错误的
int& f()
{
	int i = 10;//局部变量存放在栈区，函数调用结束后，栈区空间被释放
	return i; 
}
//2.返回静态变量的引用，正确的，可以做左值
int & f2()
{
	static int i = 100;//静态变量存放在全局区，函数调用结束后，静态变量依然存在
	return i;
}
int main()
{
	//不能返回局部变量的引用
	int& a = f();
	cout << "a:" << a << endl;//输出的是一个随机值
	cout << "&a:" << &a << endl;
	cout << "f():" << f() << endl;//输出的是一个随机值
	cout << "&f():" << &f() << endl;
	//可以返回静态变量的引用
	int& b = f2();
	cout << "b:" << b << endl;
	cout << "f2():" << f2() << endl;
	//返回的静态变量可以做左值
	f2() = 200;
	cout << "f2():" << f2() << endl;
	cout << "f2():" << f2() << endl;
	cout << "f2():" << f2() << endl;
	cout << "f2():" << f2() << endl;
	return 0;
}