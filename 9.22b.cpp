#include<iostream>
using namespace std;
void func(int& x)//������Ϊ��������
{
	x = 30;//x�����ã��Զ�ת��Ϊ*x=30;
}
int main()
{
	int a = 10;
	int& b = a;//�Զ�ת��Ϊint * const b=&a;ָ�볣����ָ��ָ�򲻿ɸģ������Ϊʲô���ò��ɸ���
	b = 20;//�ڲ�����b�����ã��Զ�ת��Ϊ*b=20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	func(a);
	return 0;

}