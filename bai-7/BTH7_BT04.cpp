#include <iostream>
#include <string>

using namespace std;

bool isNumber(char c)
{
    if (c >= 48 && c <= 57)
        return true;
    else
        return false;
}

bool isCharacter(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return true;
    else
        return false;
}


int main()
{
    string str;
    int countNumber = 0, countCharacter = 0;
    cout << "Nhap vao chuoi ky tu: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (isCharacter(str[i]))
            countCharacter++;
        else if (isNumber(str[i]))
            countNumber++;
    }

    cout << "Chuoi \"" << str << "\" co " << countCharacter << " ky tu chu va " << countNumber << " ky tu so" << endl;
    return 0;
}