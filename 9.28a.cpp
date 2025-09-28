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
int main()
{
	//调用函数
	//1.括号法
	Student s1(20);
	//2.显示法
	Student s2 = Student(30);
	//3.隐式转换法
	Student s3 = 40;
	//4.拷贝构造函数
	Student s4 = s1;

	return 0;
}