#include <iostream>
#include <string>
using namespace std;

void reverse_string(string& str)
{
    int l = 0;
    int r = str.length() - 1;
    while (l<r)
    {
        swap(str[r], str[l]);
        l++;
        r--;
    }
}

int main(int argc, char const* argv[])
{
    string str;
    getline(cin, str);        //�����ַ���
    reverse_string(str);     //�����ַ���str
    cout << str << endl;    //����������ַ���
    return 0;
}