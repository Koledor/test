#include<iostream>
using namespace std;
class person
{
public:
	int age;
	void setage(int age)
	{
		this->age = age;
	}
	//返回值为person类型，则会调用拷贝函数，返回一个临时对象
	person addage1(person& p)
	{
		this->age += p.age;
		return *this;
	}
	//返回值为person&类型，则不会调用拷贝函数，返回当前对象的引用
	person& addage2(person& p)
	{
		this->age += p.age;
		return *this;
	}

};
int main()
{
	person p1, p2,p3;
	p1.setage(10);
	p2.setage(10);
	p3.setage(10);
	p2.addage1(p1).addage1(p1).addage1(p1);
	p3.addage2(p1).addage2(p1).addage2(p1);
	cout <<"p2的age:" << p2.age << endl;
	cout << "p3的age:" << p3.age << endl;
}