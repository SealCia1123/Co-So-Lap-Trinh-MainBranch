#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "Nhap vao thang: ";
    cin >> month;
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "So ngay cua thang " << month << " la 31 ngay" << endl;
            break;
        case 2:
            cout << "So ngay cua thang " << month << " la 28 hoac 29 ngay" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "So ngay cua thang " << month << " la 30 ngay" << endl;
            break;
        default:
            cout << "Thang nhap vao khong hop le" << endl;
            break;
    }
    return 0;
}