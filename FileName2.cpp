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
    getline(cin, str);        //ÊäÈë×Ö·û´®
    reverse_string(str);     //ÄæÐò×Ö·û´®str
    cout << str << endl;    //Êä³öÄæÐòºóµÄ×Ö·û´®
    return 0;
}