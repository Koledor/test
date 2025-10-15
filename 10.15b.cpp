#include<iostream>
#include<string>
using namespace std;
class Building
{
	friend class GoodGay;// 类做友元类, GoodGay类可以访问Building类的所有成员
private:
	string bedroom;
public:
	string livingroom;
	Building() :livingroom("客厅"), bedroom("卧室") {}
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
		cout << "访问公有成员：" << building->livingroom << endl;
		cout << "访问私有成员：" << building->bedroom << endl;// 访问不到私有成员
	}
};
int main()
{
	GoodGay gg;
	gg.visit();
	return 0;
}