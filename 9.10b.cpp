#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string s;
	getline( cin, str);
	s = str;
	int r = 0;
	int l = str.length()-1;
	while (r < l)
	{
		swap(str[r], str[l]);
		r++;
		l--;
	}
	cout << "ԭ�ַ���Ϊ:" << s << endl;
	cout << "��ת���ַ���Ϊ:" << str << endl;
	if (s == str)
	{
		cout << "���ַ����ǻ����ַ���" << endl;
	}
	else
	{
		cout << "���ַ������ǻ����ַ���" << endl;
	}
	return 0;
}