#include<iostream>
using namespace std;
class person
{
public:
	int age;
	mutable int score; //mutable���εĳ�Ա������������const��Ա�������޸�
	person():age(0){}
	//������
	void setage()const //����const��this��Ϊconst person* const this���Ȳ����޸�ָ����ָ������ݣ�Ҳ�����޸�ָ�뱾��
	{
		score = 100;
		//this->age = 10;this����Ϊperson* const this,ָ��ǰ�����ָ�볣��
		//this = NULL;ֻ�����޸�ָ����ָ������ݣ������޸�ָ�뱾��
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
	const person p2;//������ֻ�ܵ��ó�����
	p2.setage();
	//p2.show();�޷�������ͨ����
	return 0;
}