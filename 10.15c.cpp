#include<iostream>
#include<string>
using namespace std;
class Building;
class GoodGay
{
public:
	Building* building;
	GoodGay();
	void visit();
};
class Building
{
	friend void GoodGay::visit();//��Ա��������Ԫ����������������Է���Building������г�Ա
private:
	string bedroom;
public:
	string livingroom;
	Building() :livingroom("����"), bedroom("����") {}
};
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay:: visit()
{
	cout << "���ʹ��г�Ա��" << building->livingroom << endl;
	cout << "����˽�г�Ա��" << building->bedroom << endl;// ���ʲ���˽�г�Ա
}
int main()
{
	GoodGay gg;
	gg.visit();
	return 0;
}