#include<iostream>
using namespace std;
int main()
{
	int fen;
	cin >> fen;
	switch (fen)
	{
		case 6:
			cout << " ����" << endl;
			break;
		case 7:
			cout << "һ��" << endl;
			break;
		case 8:
			cout << "����" << endl;
			break;
		case 9:
			cout << "����" << endl;
			break;
		case 10:
			cout << "����" << endl;
			break;
		default:
			cout << "������" << endl;
	}
	return 0;
}