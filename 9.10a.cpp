#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int max = INT_MIN;
	int smax = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num > max)
		{
			smax = max;
			max=num;
		}
		else if (num > smax && num < max)
		{
			smax = num;
		}
	}
	cout << "数列中的最大值为:" << max << " " << "数列中的此最大值为:" << smax << endl;
	return 0;
}