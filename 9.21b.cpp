#include<iostream>
using namespace std;
void f1()
{   //����10��int���͵Ķ�̬���飬�ڶ���
	int* arr = new int[10];//10����10��int���͵�����
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷ��ڴ�
	//�ͷŶ�̬����ʱ���������[]����ʾ�ͷŵ�������
	delete[] arr;
}
int* f2()
{
	int* p = new int(10);//�ڶ�������һ��int���͵ı�����ֵΪ10
	return p;
}
int main()
{
	f1();
	int* p = f2();
	cout << *p << endl;//������ȷ���10����Ϊpָ����ڴ滹û�б��ͷţ�������ջ�����ؾֲ������ĵ�ַ���޷�����
	return 0;
}