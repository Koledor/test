#include<iostream>
using namespace std;
class person
{
public:
	int age;
	mutable int score; //mutable修饰的成员变量，可以在const成员函数中修改
	person():age(0){}
	//常函数
	void setage()const //加了const后，this变为const person* const this，既不能修改指针所指向的内容，也不能修改指针本身
	{
		score = 100;
		//this->age = 10;this本质为person* const this,指向当前对象的指针常量
		//this = NULL;只可以修改指针所指向的内容，不能修改指针本身
	}
	void show()
	{
		cout <<"this is show()" << endl;
	}

};
int main()
{
	person p1;
	p1.setage();
	const person p2;//常对象，只能调用常函数
	p2.setage();
	//p2.show();无法调用普通函数
	return 0;
}