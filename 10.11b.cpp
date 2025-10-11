#include<iostream>
using namespace std;
class person
{
public:
	int age;
	void show1()
	{
		cout << "this is show1()" << endl;
	}
	void show2()
	{
		cout << age << endl;//其实是this->age，但this是一个空指针，所以会报错
	}
};
void test()
{
	person* p = NULL;
	p->show1();//不会报错，空指针可以访问成员函数，
	//p->show2();//会报错
}
int main()
{
	test();
	return 0;
}