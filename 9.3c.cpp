#include<iostream>
using namespace std;
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "�������a=" << num1 << endl;
	cout << "�������b=" << num2 << endl;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "����a��b" << endl;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//˵��ֵ���ݣ��βεĸı䲻Ӱ��ʵ�Σ�
	return 0;
}