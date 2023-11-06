// hàm kiểm tra năm nhuận
#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}

int main()
{
    int year;
    cout << "Nhap vao nam: ";
    cin >> year;
    if (isLeapYear(year))
        cout << "Nam " << year << " la nam nhuan" << endl;
    else
        cout << "Nam " << year << " khong phai la nam nhuan" << endl;
    return 0;
}