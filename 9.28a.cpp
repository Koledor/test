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
int main()
{
	//���ú���
	//1.���ŷ�
	Student s1(20);
	//2.��ʾ��
	Student s2 = Student(30);
	//3.��ʽת����
	Student s3 = 40;
	//4.�������캯��
	Student s4 = s1;

	return 0;
}