#include<iostream>'
using namespace std;
class Student
{
private:
	int age;
public:
	Student()
	{
		cout << "无参构造函数" << endl;
	}
	Student(int a)
	{
		age = a;
		cout << "有参构造函数" << endl;
	}
	~Student()
	{
		cout << "析构函数" << endl;
	}
	Student(const Student& s)
	{
		age = s.age;
		cout << "拷贝构造函数" << endl;
	}
};
//拷贝构造函数调用的时机
//1.使用一个已经创建完了的对象来初始化一个新对象
void test1()
{
	Student s1(20);
	Student s2(s1);
}
//2.值传递的方式给函数参数传值
void dowork(Student s)
{
	cout << "dowork函数调用" << endl;
}
void test2()
{
	Student s1;
	dowork(s1);
	
}
//3.值传递的方式返回局部对象
Student dowork2()
{
	Student s1;
	return s1;
}
void test3()
{
	Student s = dowork2();
}
int main()
{
	//test1();
	//test2();
	test3();

	return 0;
}