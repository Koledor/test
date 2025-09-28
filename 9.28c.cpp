#include<iostream>
using namespace std;
class Student
{
private:
	int age;
	int* score;;
public:
	Student(int a, int s)
	{
		age = a;
		score = new int(s);
	}
	//1. Default constructor，如果直接用编译器提供的拷贝构造函数，进行浅拷贝，会出现问题
	//2. 解决方案：自己提供拷贝构造函数，进行深拷贝
	Student(const Student& s)
	{
		age = s.age;
		//score = s.score; //浅拷贝,这个是编译器提供的默认拷贝构造函数
		score = new int(*s.score); //深拷贝，开辟新的内存空间
	}
	~Student()
	{
		if(score != NULL)
		{
			delete score;
			score = NULL;
			cout << "析构函数调用" << endl;
		}
	}
};
int main()
{
	Student s1(20, 100);
	Student s2 = s1; //
	return 0;
}