#include<iostream>
using namespace std;
//函数声明,有了函数声明就可以在main函数后面写函数定义
int max(int a, int b);
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "较大的一个值:" << max(a, b) << endl;
	return 0;
}
//函数定义
int max(int a, int b)
{
	return a > b ? a : b;
}