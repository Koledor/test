#include<iostream>
using namespace std;
class Student
{	
private:
	int age;
	int id;
public:
	Student(int a, int b) :age(a), id(b) {}//��ʼ���б�
	void displahy()
	{
		cout<<"age:"<<age<<endl;
		cout << "id:" << id << endl;
	}
};
int main()
{
	Student s(20, 100);
	s.displahy();
	return 0;
}