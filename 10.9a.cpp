#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	int b;
	//��̬��Ա����
	static int age;
	//��̬��Ա����
	static void func()
	{
		age = 100;
		//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����,b = 10; ����Ǵ����
		cout << "func����" << endl;
	}

};
int Person::age = 0; //��̬��Ա���������������ʼ��
void test()
{
	Person p1;
	cout << p1.age << endl;
	Person p2;
	//���ó�Ա������ͬһ������
	p2.age = 10;
	cout << p1.age << endl;
}
void test1()
{
	Person p3;
	//��̬��Ա�����ĵ���
	//1.ͨ���������
	cout << p3.age << endl;
	//2.ͨ����������
	cout << Person::age << endl;

	//��̬��Ա�����ĵ���
	//1.ͨ���������
	p3.func();
	//2.ͨ����������
	Person::func();
}
int main()
{
	test();
	test1();
	return 0;
}