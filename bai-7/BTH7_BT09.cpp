#include <iostream>

using namespace std;

bool isLeapYear(int year);

int daysInMonth(int month, int year);

int countDays(int date, int month, int year);

int main()
{
    int date, month, year;
    do
    {
        cout << "Nhap vao 3 gia tri ngay-thang-nam: ";
        cin >> date >> month >> year;
        if (!countDays(date, month, year))
            cout << "Gia tri ngay-thang-nam nhap vao khong hop le!" << endl;
    } while (!countDays(date, month, year));

    cout << "Ngay " << date << " thang " << month << " nam " << year << " cach ngay dau tien trong nam: "
         << countDays(date, month, year) << " ngay" << endl;
    return 0;
}

bool isLeapYear(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}

int daysInMonth(int month, int year)
{
    int daysInMonth;
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
            if (isLeapYear(year))
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
            daysInMonth = 0;
    }
    return daysInMonth;
}

int countDays(int date, int month, int year)
{
    if ((date > 31 || date < 1) || (month > 12 || month < 1) || (year < 1))
        return 0;
    int result = 0;
    for (int i = 1; i < month; i++)
    {
        switch (daysInMonth(i, year))
        {
            case 30:
                result += 30;
                break;
            case 31:
                result += 31;
                break;
            case 28:
                result += 28;
                break;
            case 29:
                result += 29;
                break;
        }
    }
    return result + date;
}
