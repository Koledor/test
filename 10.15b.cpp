#include<iostream>
#include<string>
using namespace std;
class Building
{
	friend class GoodGay;// ������Ԫ��, GoodGay����Է���Building������г�Ա
private:
	string bedroom;
public:
	string livingroom;
	Building() :livingroom("����"), bedroom("����") {}
};
class GoodGay
{
public:
	Building* building;
	GoodGay()
	{
		building = new Building;
	}
	void visit()
	{
		cout << "���ʹ��г�Ա��" << building->livingroom << endl;
		cout << "����˽�г�Ա��" << building->bedroom << endl;// ���ʲ���˽�г�Ա
	}
};
int main()
{
	GoodGay gg;
	gg.visit();
	return 0;
}