#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//continue跳过本次循环剩下的代码，直接进入下一次循环
		}
		cout << i << endl;
	}
	return 0;
}