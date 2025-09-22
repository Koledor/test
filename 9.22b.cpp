#include<iostream>
using namespace std;
void func(int& x)//引用作为函数参数
{
	x = 30;//x是引用，自动转化为*x=30;
}
int main()
{
	int a = 10;
	int& b = a;//自动转化为int * const b=&a;指针常量是指针指向不可改，这就是为什么引用不可更改
	b = 20;//内部发现b是引用，自动转化为*b=20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	func(a);
	return 0;

}