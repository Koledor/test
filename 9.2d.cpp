#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	cout << "数组内存大小:" << sizeof(arr) << endl;
	cout << "数组元素个数:" << sizeof(arr)/sizeof(arr[0])<< endl;
	cout << "数组首地址:" << arr << endl;
	cout << "数组第一个元素地址:" <<&arr[0] << endl;//数组中元素的位置要加&
	return 0;
}