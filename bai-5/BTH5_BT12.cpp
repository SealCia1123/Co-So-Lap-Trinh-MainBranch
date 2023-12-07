#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char choice;
    int h;
    cout << "Nhap vao lua chon (a, b, c, d, e): ";
    cin >> choice;
    cout << "Nhap vao chieu cao cua tam giac: ";
    cin >> h;
    switch (choice)
    {
        case 'a':
            // hình a.
            cout << "*\n";
            for (int i = 2; i <= h - 1; i++)
                cout << "*" << setw(i) << "*\n";
            for (int i = 1; i <= h; i++)
                cout << "*";
            break;
        case 'b':
            // hình b.
            for (int i = 1; i <= h; i++)
            {
                cout << setw(h - i + 1);
                for (int j = 1; j <= i; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        case 'c':
            // hình c.
            cout << endl;
            for (int i = h; i >= 1; i--)
            {
                for (int j = 1; j <= i; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        case 'd':
            // hinh d
            cout << endl;
            for (int i = h; i >= 1; i--)
            {
                cout << setw(h - i + 1);
                for (int j = 1; j <= i; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        case 'e':
            for (int i = 1; i <= h; i++)
            {
                cout << setw(h - i + 2);
                for (int j = 1; j <= i; j++)
                    cout << "* ";
                cout << endl;
            }
            break;
        default:
            cout << "Lua chon khong hop le\n";
    }


    return 0;
}