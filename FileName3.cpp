#include<iostream>
using namespace std;
int main()
{
	for (int i = 100; i < 1000; i++)
	{
		int a = i / 100;
		int b = (i / 10)%10;
		int c = i % 10;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			cout << i << "是水仙花数" << endl;
		}
	}
	return 0;
}