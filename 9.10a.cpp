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
	cout << "�����е����ֵΪ:" << max << " " << "�����еĴ����ֵΪ:" << smax << endl;
	return 0;
}