#include<iostream>
#include<string>
using namespace std;
class Building 
{
	friend void getroom(Building* b);// 全局函数做友元函数，这样getroom就可以访问Building里的所有成员
public:
	Building() :livingroom("客厅"), bedroom("卧室") {}
	string livingroom;
private:
	string bedroom;
};
void getroom(Building*b)
{
	cout << "访问公有成员：" << b->livingroom << endl;
	cout << "访问私有成员：" << b->bedroom << endl;
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