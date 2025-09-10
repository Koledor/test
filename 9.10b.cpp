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
	cout << "原字符串为:" << s << endl;
	cout << "反转后字符串为:" << str << endl;
	if (s == str)
	{
		cout << "该字符串是回文字符串" << endl;
	}
	else
	{
		cout << "该字符串不是回文字符串" << endl;
	}
	return 0;
}