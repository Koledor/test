#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int c = 30;
	//int& c;//错误，引用必须初始化
	int& b = a;//一旦引用被初始化后，就不能再引用其他变量
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	b = 20;//通过引用修改了a的值
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	b = c;//将c的值赋给了a,不是更改引用
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	
	
	return 0;
}