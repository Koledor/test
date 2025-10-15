#include<iostream>
using namespace std;
class person
{
public:
	int a;
	int b;
	//成员函数重载+号
	person operator+ (person & B)
	{
		person temp;
		temp.a = this->a + B.a;
		temp.b = this->b + B.b;
		return temp;
	}
};
//全局函数重载+号
//person operator+ (person&A,person&B)
//{
//	person temp;
//	temp.a = A.a + B.a;
//	temp.b = A.b + B.b;
//	return temp;
//}
//重载operatro
person operator+ (person & A, int num)
{
	person temp;
	temp.a = A.a +num;
	temp.b = A.b +num ;
	return temp;
}
int main()
{
	person p1, p2, p3,p4;
	p1.a = 10;
	p1.b = 20;
	p2.a = 10;
	p2.b = 20;
	p3 = p1+p2;
	//operator+也可以重载
	p4 = p1 + 100;
	cout << "p3.a=" << p3.a << endl;
	cout << "p3.b=" << p3.b << endl;
	cout << "p4.a=" << p4.a << endl;
	cout << "p4.b=" << p4.b << endl;
	return 0;
}