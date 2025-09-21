#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int count = 0;
	if (n == 2)
	{
		cout << 1 << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 2; j <i; j++)
		{
			if (i % j == 0)
			{
				count++;
				break;
			}
		}
	}
	cout << n - count-1 << endl;
	return 0;
}