#include<iostream>
using namespace std;
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后的a=" << num1 << endl;
	cout << "交换后的b=" << num2 << endl;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "交换a和b" << endl;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//说明值传递，形参的改变不影响实参；
	return 0;
}