#include<iostream>
using namespace std;
//1.�޲��޷�
void test01()
{
	cout << "this is test01" << endl;
}
//2.�޲��з�
int test02()
{
	cout << "this is test02" << endl;
	return 100;
}
//3.�в��޷�
void test03(int a, int b)
{
	int c = a + b;
	cout << "this is test03" << endl;
	cout << "c=" << c << endl;
}
//4.�в��з�
int test04(int a, int b)
{
	int c = a + b;
	cout << "this is test04" << endl;
	return c;
}
int main()
{
	//�����޲��޷�
	test01();
	//�����޲��з�
	int num = test02();
	cout << "num" << num << endl;
	//�����в��޷�
	test03(10, 20);
	//�����в��з�
	int sum = test04(10, 20);
	cout << "sum" << sum << endl;
	
	return 0;
}