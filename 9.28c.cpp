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
	//1. Default constructor�����ֱ���ñ������ṩ�Ŀ������캯��������ǳ���������������
	//2. ����������Լ��ṩ�������캯�����������
	Student(const Student& s)
	{
		age = s.age;
		//score = s.score; //ǳ����,����Ǳ������ṩ��Ĭ�Ͽ������캯��
		score = new int(*s.score); //����������µ��ڴ�ռ�
	}
	~Student()
	{
		if(score != NULL)
		{
			delete score;
			score = NULL;
			cout << "������������" << endl;
		}
	}
};
int main()
{
	Student s1(20, 100);
	Student s2 = s1; //
	return 0;
}