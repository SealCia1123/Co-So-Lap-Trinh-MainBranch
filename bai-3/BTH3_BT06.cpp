#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Nhap vao nam: ";
    cin >> year;
    if (year < 0)
        cout << "Nhap vao nam khong hop le" << endl;
    else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        cout << year << " la nam nhuan" << endl;
    else
        cout << year << " khong phai la nam nhuan" << endl;
    return 0;
}