#include <iostream>
#include <string>

using namespace std;

bool isNumber(char c);

bool isCharacter(char c);

void count(string str, int &countNumber, int &countCharacter);

int main()
{
    string str;
    int countNumber = 0, countCharacter = 0;
    cout << "Nhap vao chuoi ky tu: ";
    getline(cin, str);
    count(str, countNumber, countCharacter);
    cout << "Chuoi \"" << str << "\" co " << countCharacter << " ky tu chu va " << countNumber << " ky tu so" << endl;
    return 0;
}

bool isNumber(char c)
{
    if (c >= 48 && c <= 57)
        return true;
    return false;
}

bool isCharacter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}

void count(string str, int &countNumber, int &countCharacter)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isCharacter(str[i]))
            countCharacter++;
        else if (isNumber(str[i]))
            countNumber++;
    }

}
