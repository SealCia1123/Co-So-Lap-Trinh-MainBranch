// nhập vào chiều dài của hình vuông sau đó in ra 2 hình vuông
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char choice;
    int c;
    cout << "Lua chon (a, b): ";
    cin >> choice;
    cout << "Nhap vao chieu dai canh hinh vuong: ";
    cin >> c;
    switch (choice)
    {
        case 'a':
            for (int i = 0; i < c; i++)
            {
                for (int j = 0; j < c; j++)
                    cout << "*";
                cout << endl;
            }
            break;
        case 'b':
            for (int j = 1; j <= c; j++)
                cout << "*";
            cout << endl;
            for (int j = 2; j <= c - 1; j++)
                cout << "*" << setw(c) << "*\n";
            for (int j = 1; j <= c; j++)
                cout << "*";
            break;
        default:
            cout << "Lua chon khong hop le\n";
    }

    return 0;
}