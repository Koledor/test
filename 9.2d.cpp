#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	cout << "�����ڴ��С:" << sizeof(arr) << endl;
	cout << "����Ԫ�ظ���:" << sizeof(arr)/sizeof(arr[0])<< endl;
	cout << "�����׵�ַ:" << arr << endl;
	cout << "�����һ��Ԫ�ص�ַ:" <<&arr[0] << endl;//������Ԫ�ص�λ��Ҫ��&
	return 0;
}