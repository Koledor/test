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
	cout << "*****" << "1.添加联系人" << "*****" << endl;
	cout << "*****" << "2.显示联系人" << "*****" << endl;
	cout << "*****" << "3.删除联系人" << "*****" << endl;
	cout << "*****" << "4.查找联系人" << "*****" << endl;
	cout << "*****" << "5.修改联系人" << "*****" << endl;
	cout << "*****" << "6.清空联系人" << "*****" << endl;
	cout << "*****" << "0.退出通讯录" << "*****" << endl;
	cout << "**********************" << endl;
	cout << "请选择:" << endl;
}
//添加联系人
void add(Addressbooks* abs)
{
	if (abs->size == 1000)
	{
		cout << "通讯录已满,无法添加!" << endl;
		return;
	}
	else
	{
		//输入姓名
		cout << "请输入姓名:" << endl;
		string name;
		cin >> name;
		abs->person[abs->size].name = name;
		//输入性别
		cout << "请输入性别:" << endl;
		cout << "1.男 2.女" << endl;
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
				cout << "输入有误,请重新输入!" << endl;
				return;
			}
		}
		//输入年龄
		cout << "请输入年龄:" << endl;
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
				cout << "输入有误,请重新输入!" << endl;
				return;
			}
		}
		//输入电话
		cout << "请输入电话号码:" << endl;
		int phone = 0;
		cin >> phone;
		abs->person[abs->size].phone = phone;
		//输入地址
		cout << "请输入地址:" << endl;
		string address;
		cin >> address;
		abs->person[abs->size].address = address;
		//更新通讯录人数
		abs->size++;
		cout << "添加成功!" << endl;
		system("pause");//输入任意键继续
		system("cls");//清屏
	}
}
//显示联系人
void xianshi(Addressbooks* abs)
{
	if (abs->size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名:" << abs->person[i].name << "   ";
			cout << "性别:" << (abs->person[i].sex == 1 ? "男" : "女") << "   ";
			cout << "年龄:" << abs->person[i].age << "   ";
			cout << "地址:" << abs->person[i].address << endl;
		}
	}
	system("pause");
	system("cls");
}
//检验是否存在
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
//删除联系人 
void shanchu(Addressbooks* abs)
{
	cout << "请输入要删除的人的姓名:" << endl;
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
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "此人不存在" << endl;
	}
	system("pause");
	system("cls");
}
//查找联系人
void chazhao(Addressbooks* abs)
{
	cout<< "请输入查找的人的姓名:" << endl;
	string name;
	cin >> name;
	int ert=exist(abs, name);
	if (ert!=1)
	{
		cout << "姓名:" << abs->person[ert].name << "   ";
		cout << "性别:" << (abs->person[ert].sex == 1 ? "男" : "女") << "   ";
		cout << "年龄:" << abs->person[ert].age << "   ";
		cout << "地址:" << abs->person[ert].address << endl;
	}
	else
	{
		cout << "此人不存在" << endl;
	}
	system("pause");
	system("cls");
}
//修改联系人
void xiugai(Addressbooks* abs)
{

	//输入姓名
	cout << "请输入姓名:" << endl;
	string name;
	cin >> name;
	int ert = exist(abs, name);
	if (ert != 1)
	{
		//修改姓名
		abs->person[ert].name = name;
		//输入性别
		cout << "请输入性别:" << endl;
		cout << "1.男 2.女" << endl;
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
				cout << "输入有误,请重新输入!" << endl;
				return;
			}
		}
		//输入年龄
		cout << "请输入年龄:" << endl;
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
				cout << "输入有误,请重新输入!" << endl;
				return;
			}
		}
		//输入电话
		cout << "请输入电话号码:" << endl;
		int phone = 0;
		cin >> phone;
		abs->person[ert].phone = phone;
		//输入地址
		cout << "请输入地址:" << endl;
		string address;
		cin >> address;
		abs->person[ert].address = address;
	}
	else
	{
		cout << "此人不存在" << endl;
	}
	system("pause");
	system("cls");
}
//清空联系人
void clearperson(Addressbooks* abs)
{
	abs->size = 0;
	cout << "通讯录已清空" << endl;
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
			cout << "欢迎下次使用!" << endl;
			return 0;
		default:
			cout << "输入有误,请重新输入!" << endl;
			break;
		}
	}
	return 0;
}