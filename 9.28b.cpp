#include<iostream>'
using namespace std;
class Student
{
private:
	int age;
public:
	Student()
	{
		cout << "�޲ι��캯��" << endl;
	}
	Student(int a)
	{
		age = a;
		cout << "�вι��캯��" << endl;
	}
	~Student()
	{
		cout << "��������" << endl;
	}
	Student(const Student& s)
	{
		age = s.age;
		cout << "�������캯��" << endl;
	}
};
//�������캯�����õ�ʱ��
//1.ʹ��һ���Ѿ��������˵Ķ�������ʼ��һ���¶���
void test1()
{
	Student s1(20);
	Student s2(s1);
}
//2.ֵ���ݵķ�ʽ������������ֵ
void dowork(Student s)
{
	cout << "dowork��������" << endl;
}
void test2()
{
	Student s1;
	dowork(s1);
	
}
//3.ֵ���ݵķ�ʽ���ؾֲ�����
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