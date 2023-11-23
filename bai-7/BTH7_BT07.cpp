#include <iostream>
#include <string>

using namespace std;

bool checkLowerCase(char c);

bool checkUpperCase(char c);

int main()
{
    string str;
    int lowerCase = 0, upperCase = 0;
    cout << "Nhap vao chuoi: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (checkLowerCase(str[i]))
            lowerCase++;
        if (checkUpperCase(str[i]))
            upperCase++;
    }
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
