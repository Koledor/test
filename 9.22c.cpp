#include<iostream>
using namespace std;
void func(const int& a)//const�������ã����õ�ֵ���ܱ��޸�
{
	//a = 10;��ֹ�޸����õ�ֵ
	cout << "Value of a is: " << a << endl;
}
int main()
{
	int a = 10;
	func(a);
	return 0;
}