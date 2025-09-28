#include<iostream>
using namespace std;
const int MAX = 10;
class Seqlist
{
private:
	int data[MAX];
	int length;
public:
	void setlength()
	{
		length = MAX;
	}
	int  getlength()
	{
		return length;
	}
	void shuru()
	{
		for (int i = 0; i < MAX; i++)
		{
			cin >> data[i];
		}
	}
	void display()
	{
		for (int i = 0; i < length; i++)
		{
			cout << "第" << (i + 1) << "个元素为:"<<data[i] << endl;
		}
	}

};
int main()
{
	Seqlist l;
	l.setlength();
	l.shuru();
	cout << "顺序表的长度为:" << l.getlength() << endl;
	l.display();
	return 0;
}