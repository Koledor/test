#include<iostream>
using namespace std;
class person
{
public:
	int age;
	void show1()
	{
		cout << "this is show1()" << endl;
	}
	void show2()
	{
		cout << age << endl;//��ʵ��this->age����this��һ����ָ�룬���Իᱨ��
	}
};
void test()
{
	person* p = NULL;
	p->show1();//���ᱨ����ָ����Է��ʳ�Ա������
	//p->show2();//�ᱨ��
}
int main()
{
	test();
	return 0;
}