//引用做函数参数
#include <iostream>
using namespace std;
//1.值传递
void myswap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "myswap1 a:" << a << endl;
	cout << "myswap1 b" << b << endl;
}
//2.地址传递
void myswap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递
void myswap3(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	myswap1(a, b);//值传递，形参不会修饰实参
	cout << "a:" << a<<endl;
	cout << "b:" << b<<endl;
	//myswap2(&a, &b);//地址传递，形参会修饰实参
	//cout << "a:" << a<<endl;
	//cout << "b:" << b<<endl;
	myswap3(a, b);//引用传递，形参会修饰实参
	cout << "a:" << a<<endl;
	cout << "b:" << b<<endl;
	return 0;
}