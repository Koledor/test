#include<iostream>
using namespace std;
void f1()
{   //创建10个int类型的动态数组，在堆区
	int* arr = new int[10];//10代表10个int类型的数组
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放内存
	//释放动态数组时，必须加上[]，表示释放的是数组
	delete[] arr;
}
int* f2()
{
	int* p = new int(10);//在堆区创建一个int类型的变量，值为10
	return p;
}
int main()
{
	f1();
	int* p = f2();
	cout << *p << endl;//可以正确输出10，因为p指向的内存还没有被释放，不像在栈区返回局部变量的地址，无法访问
	return 0;
}