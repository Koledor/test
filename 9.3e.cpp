#include<iostream>
using namespace std;
//��������,���˺��������Ϳ�����main��������д��������
int max(int a, int b);
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "�ϴ��һ��ֵ:" << max(a, b) << endl;
	return 0;
}
//��������
int max(int a, int b)
{
	return a > b ? a : b;
}