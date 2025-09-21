#include<iostream>
using namespace std;
//栈区数据的注意事项，不要返回局部变量的地址
int* f(int b)//形参b也存放在栈区
{
	b = 100;
	int a = 10;//局部变量，存放在栈区，函数调用结束后，变量a就被销毁
	return &a;//返回局部变量的地址
}
int main()
{
	int c = 10;
	int* p = f(c);
	cout << (*p) << endl;//第一次可以打印正确的值，是因为编译器做了保留
	cout << (*p) << endl;//第二次打印的值就不确定了
	cout << (*p) << endl;
	cout << (*p) << endl;
	cout << (*p) << endl;
	return 0;
}