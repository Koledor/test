#include<iostream>
using namespace std;
int main()
{
	//(1)常量指针
	int a = 10;
	int b = 20;
	const int* p = &a;
	p = &b;//常量指针是可以修改指向的
	//*p = 30;//错误，不能通过常量指针修改指向的变量
	//(2) 指针常量
	int* const q = &a;
	*q = 30;//可以通过指针常量修改指向的变量
	//q = &b;//错误，不能修改指针常量的指向
	//(3) 常量指针常量
	const int* const r = &a;
	//*r = 40;//错误，不能通过常量指针常量修改指向的变量
	//r = &b;//错误，不能修改常量指针常量的指向
	return 0;
}