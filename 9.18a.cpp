#include<iostream>
#include<string>
#define MAX 1000
using namespace std;
struct Person
{
	string name;
	int sex;
	int age;
	string phone;
	string address;
};
struct Addressbooks
{
	Person person[1000];
	int size;
};
void show()
{
	cout << "**********************" << endl;
	cout << "*****" << "1.�����ϵ��" << "*****" << endl;
	cout << "*****" << "2.��ʾ��ϵ��" << "*****" << endl;
	cout << "*****" << "3.ɾ����ϵ��" << "*****" << endl;
	cout << "*****" << "4.������ϵ��" << "*****" << endl;
	cout << "*****" << "5.�޸���ϵ��" << "*****" << endl;
	cout << "*****" << "6.�����ϵ��" << "*****" << endl;
	cout << "*****" << "0.�˳�ͨѶ¼" << "*****" << endl;
	cout << "**********************" << endl;
	cout << "��ѡ��:" << endl;
}
//�����ϵ��
void add(Addressbooks* abs)
{
	if (abs->size == 1000)
	{
		cout << "ͨѶ¼����,�޷����!" << endl;
		return;
	}
	else
	{
		//��������
		cout << "����������:" << endl;
		string name;
		cin >> name;
		abs->person[abs->size].name = name;
		//�����Ա�
		cout << "�������Ա�:" << endl;
		cout << "1.�� 2.Ů" << endl;
		int sex = 0;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->person[abs->size].sex = sex;
				break;
			}
			else
			{
				cout << "��������,����������!" << endl;
				return;
			}
		}
		//��������
		cout << "����������:" << endl;
		int age = 0;
		cin >> age;
		while (true)
		{
			if (age > 0 && age < 150)
			{

				abs->person[abs->size].age = age;
				break;
			}
			else
			{
				cout << "��������,����������!" << endl;
				return;
			}
		}
		//����绰
		cout << "������绰����:" << endl;
		int phone = 0;
		cin >> phone;
		abs->person[abs->size].phone = phone;
		//�����ַ
		cout << "�������ַ:" << endl;
		string address;
		cin >> address;
		abs->person[abs->size].address = address;
		//����ͨѶ¼����
		abs->size++;
		cout << "��ӳɹ�!" << endl;
		system("pause");//�������������
		system("cls");//����
	}
}
//��ʾ��ϵ��
void xianshi(Addressbooks* abs)
{
	if (abs->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "����:" << abs->person[i].name << "   ";
			cout << "�Ա�:" << (abs->person[i].sex == 1 ? "��" : "Ů") << "   ";
			cout << "����:" << abs->person[i].age << "   ";
			cout << "��ַ:" << abs->person[i].address << endl;
		}
	}
	system("pause");
	system("cls");
}
//�����Ƿ����
int exist(Addressbooks * abs,string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (name == abs->person[i].name)
		{
			return i;
		}
		else
		{
			return 1;
		}
	}
}
//ɾ����ϵ�� 
void shanchu(Addressbooks* abs)
{
	cout << "������Ҫɾ�����˵�����:" << endl;
	string name;
	cin >> name;
	int ret = exist(abs, name);
	if (ret != 1)
	{
		for (int i = ret; i < abs->size; i++)
		{
			abs->person[i] = abs->person[i + 1];
		}
		abs->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���˲�����" << endl;
	}
	system("pause");
	system("cls");
}
//������ϵ��
void chazhao(Addressbooks* abs)
{
	cout<< "��������ҵ��˵�����:" << endl;
	string name;
	cin >> name;
	int ert=exist(abs, name);
	if (ert!=1)
	{
		cout << "����:" << abs->person[ert].name << "   ";
		cout << "�Ա�:" << (abs->person[ert].sex == 1 ? "��" : "Ů") << "   ";
		cout << "����:" << abs->person[ert].age << "   ";
		cout << "��ַ:" << abs->person[ert].address << endl;
	}
	else
	{
		cout << "���˲�����" << endl;
	}
	system("pause");
	system("cls");
}
//�޸���ϵ��
void xiugai(Addressbooks* abs)
{

	//��������
	cout << "����������:" << endl;
	string name;
	cin >> name;
	int ert = exist(abs, name);
	if (ert != 1)
	{
		//�޸�����
		abs->person[ert].name = name;
		//�����Ա�
		cout << "�������Ա�:" << endl;
		cout << "1.�� 2.Ů" << endl;
		int sex = 0;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->person[ert].sex = sex;
				break;
			}
			else
			{
				cout << "��������,����������!" << endl;
				return;
			}
		}
		//��������
		cout << "����������:" << endl;
		int age = 0;
		cin >> age;
		while (true)
		{
			if (age > 0 && age < 150)
			{

				abs->person[ert].age = age;
				break;
			}
			else
			{
				cout << "��������,����������!" << endl;
				return;
			}
		}
		//����绰
		cout << "������绰����:" << endl;
		int phone = 0;
		cin >> phone;
		abs->person[ert].phone = phone;
		//�����ַ
		cout << "�������ַ:" << endl;
		string address;
		cin >> address;
		abs->person[ert].address = address;
	}
	else
	{
		cout << "���˲�����" << endl;
	}
	system("pause");
	system("cls");
}
//�����ϵ��
void clearperson(Addressbooks* abs)
{
	abs->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
int main()
{
	Addressbooks abs;
	abs.size = 0;
	while (true)
	{
		show();
		int select = 0;
		cin >> select;;
		switch (select)
		{
		case 1:
			add(&abs);
			break;
		case 2:
			xianshi(&abs);
			break;
		case 3:
			shanchu(&abs);

			break;
		case 4:
			chazhao(&abs);
			break;
		case 5:
			xiugai(&abs);
			break;
		case 6:
			clearperson(&abs);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��!" << endl;
			return 0;
		default:
			cout << "��������,����������!" << endl;
			break;
		}
	}
	return 0;
}