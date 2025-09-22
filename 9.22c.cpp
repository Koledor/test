#include<iostream>
using namespace std;
void func(const int& a)//const修饰引用，引用的值不能被修改
{
	//a = 10;防止修改引用的值
	cout << "Value of a is: " << a << endl;
}
int main()
{
	int a = 10;
	func(a);
	return 0;
}