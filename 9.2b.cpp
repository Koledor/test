#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//continue��������ѭ��ʣ�µĴ��룬ֱ�ӽ�����һ��ѭ��
		}
		cout << i << endl;
	}
	return 0;
}