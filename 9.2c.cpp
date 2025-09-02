#include<iostream>
using namespace std;
int main()
{
	cout << "1.你好" << endl;
	cout << "再见" << endl;
	goto FLAG;//goto直接跳转到FLAG标签处；
	cout << "xixi" << endl;
	FLAG:
	cout << "wwww" << endl;
	return 0;
}