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
	friend void GoodGay::visit();//成员函数做友元函数，这个函数可以访问Building里的所有成员
private:
	string bedroom;
public:
	string livingroom;
	Building() :livingroom("客厅"), bedroom("卧室") {}
};
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay:: visit()
{
	cout << "访问公有成员：" << building->livingroom << endl;
	cout << "访问私有成员：" << building->bedroom << endl;// 访问不到私有成员
}
int main()
{
	GoodGay gg;
	gg.visit();
	return 0;
}