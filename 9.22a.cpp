#include<iostream>
using namespace std;
//1.���ؾֲ����������ã������
int& f()
{
	int i = 10;//�ֲ����������ջ�����������ý�����ջ���ռ䱻�ͷ�
	return i; 
}
//2.���ؾ�̬���������ã���ȷ�ģ���������ֵ
int & f2()
{
	static int i = 100;//��̬���������ȫ�������������ý����󣬾�̬������Ȼ����
	return i;
}
int main()
{
	//���ܷ��ؾֲ�����������
	int& a = f();
	cout << "a:" << a << endl;//�������һ�����ֵ
	cout << "&a:" << &a << endl;
	cout << "f():" << f() << endl;//�������һ�����ֵ
	cout << "&f():" << &f() << endl;
	//���Է��ؾ�̬����������
	int& b = f2();
	cout << "b:" << b << endl;
	cout << "f2():" << f2() << endl;
	//���صľ�̬������������ֵ
	f2() = 200;
	cout << "f2():" << f2() << endl;
	cout << "f2():" << f2() << endl;
	cout << "f2():" << f2() << endl;
	cout << "f2():" << f2() << endl;
	return 0;
}