#include<iostream>
using namespace std;
//1.无参无返
void test01()
{
	cout << "this is test01" << endl;
}
//2.无参有返
int test02()
{
	cout << "this is test02" << endl;
	return 100;
}
//3.有参无返
void test03(int a, int b)
{
	int c = a + b;
	cout << "this is test03" << endl;
	cout << "c=" << c << endl;
}
//4.有参有返
int test04(int a, int b)
{
	int c = a + b;
	cout << "this is test04" << endl;
	return c;
}
int main()
{
	//调用无参无返
	test01();
	//调用无参有返
	int num = test02();
	cout << "num" << num << endl;
	//调用有参无返
	test03(10, 20);
	//调用有参有返
	int sum = test04(10, 20);
	cout << "sum" << sum << endl;
	
	return 0;
}