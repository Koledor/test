#include<iostream>
using namespace std;
class cube
{
private:
	int chang;
	int kuan;
	int gao;
public:
	void setc(int c)
	{
		chang = c;
	}
	void setk(int k)
	{
		kuan = k;
	}
	void setg(int g)
	{
		gao = g;
	}
	int getchang()
	{
		return chang;
	}
	int getkuan()
	{
		return kuan;
	}
	int getgao()
	{
		return gao;
	}
	int volume()
	{
		return chang * kuan * gao;
	}
	int surfacearea()
	{
		return 2 * (chang * kuan + chang * gao + kuan * gao);
	}
	//ͨ����Ա�����ж�
	void deal2(cube& c)
	{
		if(chang == c.getchang() && kuan == c.getkuan() && gao == c.getgao())
		{
			cout << "�������������" << endl;
		}
		else
		{
			cout << "���������岻���" << endl;
		}
	}
};
//ͨ��ȫ�ֺ����ж�
void deal(cube& c1, cube& c2)
{
	if (c1.getchang() == c2.getchang() && c1.getkuan() == c2.getkuan() && c1.getgao() == c2.getgao())
	{
		cout << "c1��c2���" << endl;
	}
	else
	{
		cout << "c1��c2�����" << endl;
	}
}
int main()
{
	cube c1;
	c1.setc(3);
	c1.setk(4);
	c1.setg(5);
	cube c2;
	c2.setc(5);
	c2.setk(6);
	c2.setg(7);
	cout << "c1�����:" << c1.volume() << endl;
	cout << "c1�ı����:" << c1.surfacearea() << endl;
	cout << "c2�����:" << c2.volume() << endl;
	cout << "c2�ı����:" << c2.surfacearea() << endl;
	//deal(c1, c2);
	c1.deal2(c2);
	return 0;
}