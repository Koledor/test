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
	//����ֵΪperson���ͣ������ÿ�������������һ����ʱ����
	person addage1(person& p)
	{
		this->age += p.age;
		return *this;
	}
	//����ֵΪperson&���ͣ��򲻻���ÿ������������ص�ǰ���������
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
	cout <<"p2��age:" << p2.age << endl;
	cout << "p3��age:" << p3.age << endl;
}