#include<iostream>
using namespace std;
int main()
{
	int a=10;
	cout << "a��ֵ��" << a << endl;
	int* p;//����һ������ָ�����p����ʽ�ǣ���������* ָ�������
	p = &a;//������a�ĵ�ַ����ָ�����p����ʽ�ǣ�ָ�������= & ������
	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "p��ֵ��" << p << endl;
	*p = 20;//ͨ����*�������ã�ָ�����p������a��ֵ����ʽ�ǣ�* ָ�������=ֵ
	cout << "a��ֵ��" << a << endl;
	return 0;
}