//��������������
#include <iostream>
using namespace std;
//1.ֵ����
void myswap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "myswap1 a:" << a << endl;
	cout << "myswap1 b" << b << endl;
}
//2.��ַ����
void myswap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.���ô���
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
	myswap1(a, b);//ֵ���ݣ��ββ�������ʵ��
	cout << "a:" << a<<endl;
	cout << "b:" << b<<endl;
	//myswap2(&a, &b);//��ַ���ݣ��βλ�����ʵ��
	//cout << "a:" << a<<endl;
	//cout << "b:" << b<<endl;
	myswap3(a, b);//���ô��ݣ��βλ�����ʵ��
	cout << "a:" << a<<endl;
	cout << "b:" << b<<endl;
	return 0;
}