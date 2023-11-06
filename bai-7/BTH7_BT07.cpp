#include <iostream>
#include <string>

using namespace std;

bool checkLowerCase(char c)
{
    if (c >= 97 && c <= 122)
        return true;
    else
        return false;
}

bool checkUpperCase(char c)
{
    if (c >= 65 && c <= 90)
        return true;
    else
        return false;
}

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
        else if (checkUpperCase(str[i]))
            upperCase++;
    }
    cout << "Chuoi \"" << str << "\" co " << lowerCase << " ky tu in thuong va " << upperCase << " ky tu in hoa"
         << endl;
    return 0;
}