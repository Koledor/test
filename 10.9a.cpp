#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	int b;
	//静态成员变量
	static int age;
	//静态成员函数
	static void func()
	{
		age = 100;
		//静态成员函数只能访问静态成员变量,b = 10; 这个是错误的
		cout << "func调用" << endl;
	}

};
int Person::age = 0; //静态成员变量必须在类外初始化
void test()
{
	Person p1;
	cout << p1.age << endl;
	Person p2;
	//所用成员都共享同一份数据
	p2.age = 10;
	cout << p1.age << endl;
}
void test1()
{
	Person p3;
	//静态成员变量的调用
	//1.通过对象调用
	cout << p3.age << endl;
	//2.通过类名调用
	cout << Person::age << endl;

	//静态成员函数的调用
	//1.通过对象调用
	p3.func();
	//2.通过类名调用
	Person::func();
}
int main()
{
	test();
	test1();
	return 0;
}