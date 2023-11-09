#include <iostream>

using namespace std;

int main()
{
    int year, month, daysInMonth;
    bool isLeapYear = false;
    cout << "Nhap thang: ";
    cin >> month;
    cout << "Nhap nam: ";
    cin >> year;

    // Kiểm tra tháng có hợp lệ
    if (month < 1 || month > 12)
    {
        cout << "Thang nhap vao khong hop le!" << endl;
        return 0;
    }

    // Kiểm tra năm có phải năm nhuận hay không
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        isLeapYear = true;
    // Kiểm tra số ngày trong tháng
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysInMonth = 31;
            break;
        case 2:
            if (isLeapYear)
            {
                daysInMonth = 29;
                break;
            }
            else
            {
                daysInMonth = 28;
                break;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            cout << "Nhap thang khong hop le!" << endl;
    }
    cout << "So ngay cua thang " << month << " nam " << year << " la " << daysInMonth << endl;

    return 0;
}