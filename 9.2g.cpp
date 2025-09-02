#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 122,233,567,13,456 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}