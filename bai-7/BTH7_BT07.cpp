#include <iostream>
#include <string>

using namespace std;

bool checkLowerCase(char c);

bool checkUpperCase(char c);

void count(string str, int &lowerCase, int &upperCase);

int main()
{
    string str;
    int lowerCase = 0, upperCase = 0;
    cout << "Nhap vao chuoi: ";
    getline(cin, str);
    count(str, lowerCase, upperCase);
    cout << "Chuoi \"" << str << "\" co " << lowerCase << " ky tu in thuong va " << upperCase << " ky tu in hoa"
         << endl;
    return 0;
}

bool checkLowerCase(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

bool checkUpperCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}

void count(string str, int &lowerCase, int &upperCase)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (checkLowerCase(str[i]))
            lowerCase++;
        if (checkUpperCase(str[i]))
            upperCase++;
    }
}
