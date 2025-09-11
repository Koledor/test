#include<iostream>
using namespace std;
int main()
{
	//空指针
	int* p = NULL;//NULL是一个空指针常量,它的值为0,可以用来初始化一个指针
	cout << *p << endl; //运行时错误，因为p是一个空指针，不能解引用，即不可访问
	
	return 0;
}