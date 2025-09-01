#include<iostream>
using namespace std;
int main()
{
	int fen;
	cin >> fen;
	switch (fen)
	{
		case 6:
			cout << " 及格" << endl;
			break;
		case 7:
			cout << "一般" << endl;
			break;
		case 8:
			cout << "良好" << endl;
			break;
		case 9:
			cout << "优秀" << endl;
			break;
		case 10:
			cout << "满分" << endl;
			break;
		default:
			cout << "不及格" << endl;
	}
	return 0;
}