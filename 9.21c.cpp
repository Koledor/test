#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int c = 30;
	//int& c;//�������ñ����ʼ��
	int& b = a;//һ�����ñ���ʼ���󣬾Ͳ�����������������
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	b = 20;//ͨ�������޸���a��ֵ
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	b = c;//��c��ֵ������a,���Ǹ�������
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;

	
	
	return 0;
}