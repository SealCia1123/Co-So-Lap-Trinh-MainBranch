#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int h;
    cout << "Nhap vao chieu cao cua tam giac: ";
    cin >> h;

    // hình a.
    cout << "*\n";
    for (int i = 2; i <= h - 1; i++)
        cout << "*" << setw(i) << "*\n";
    for (int i = 1; i <= h; i++)
        cout << "*";

    cout << endl;

    // hình b.
    for (int i = 1; i <= h; i++)
    {
        cout << setw(h - i + 1);
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // hình c.
    cout << endl;
    for (int i = h; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    // hinh d
    cout << endl;
    for (int i = h; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << setw(i - 1) << "*";
        cout << endl;
    }

    return 0;
}