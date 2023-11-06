#include <iostream>

using namespace std;

int daysOfYear(int date, int month, int year)
{
    bool isLeapYear = false;
    int daysInMonth;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        isLeapYear = true;
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
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
        case 2:
            if (isLeapYear)
                daysInMonth = 29;
            else
                daysInMonth = 28;
    }
}

int main()
{

    return 0;
}
