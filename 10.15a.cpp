#include<iostream>
#include<string>
using namespace std;
class Building 
{
	friend void getroom(Building* b);// ȫ�ֺ�������Ԫ����������getroom�Ϳ��Է���Building������г�Ա
public:
	Building() :livingroom("����"), bedroom("����") {}
	string livingroom;
private:
	string bedroom;
};
void getroom(Building*b)
{
	cout << "���ʹ��г�Ա��" << b->livingroom << endl;
	cout << "����˽�г�Ա��" << b->bedroom << endl;
}
void test()
{
	Building b;
	getroom(&b);
}
int main()
{
	test();
	return 0;
}