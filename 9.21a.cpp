#include<iostream>
using namespace std;
//ջ�����ݵ�ע�������Ҫ���ؾֲ������ĵ�ַ
int* f(int b)//�β�bҲ�����ջ��
{
	b = 100;
	int a = 10;//�ֲ������������ջ�����������ý����󣬱���a�ͱ�����
	return &a;//���ؾֲ������ĵ�ַ
}
int main()
{
	int c = 10;
	int* p = f(c);
	cout << (*p) << endl;//��һ�ο��Դ�ӡ��ȷ��ֵ������Ϊ���������˱���
	cout << (*p) << endl;//�ڶ��δ�ӡ��ֵ�Ͳ�ȷ����
	cout << (*p) << endl;
	cout << (*p) << endl;
	cout << (*p) << endl;
	return 0;
}