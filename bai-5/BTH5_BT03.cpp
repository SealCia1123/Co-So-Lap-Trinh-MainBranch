/*
 * tính tổng:
 * S1 = 1 + 2^2 + 3^2 + ... + n^2
 * S2 = 1 + 1/2 + 1/3 + ... + 1/n
 * S3 = 1 + 1/3 + 1/5 + ... + 1 / (2n- 1)
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choice, n;
    double s;
    cout << "1. S1 = 1 + 2^2 + 3^2 + ... + n^2\n";
    cout << "2. S3 = 1 + 1/2 + 1/3 + ... + 1/n\n";
    cout << "3. S3 = 1 + 1/3 + 1/5 + ... + 1/(2n-1)\n";

    cout << "Nhap vao lua chon: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Nhap vao so nguyen duong n: ";
            cin >> n;
            for (int i = 1; i <= n; i++)
                s += i * i;
            cout << "S1 = " << fixed << setprecision(0) << s << "\n";
            break;
        case 2:
            cout << "Nhap vao so nguyen duong n: ";
            cin >> n;
            for (int i = 1; i <= n; i++)
                s += (double) 1 / i;
            cout << "S2 = " << fixed << setprecision(3) << s << "\n";
            break;
        case 3:
            cout << "Nhap vao so nguyen duong n: ";
            cin >> n;
            for (int i = 1; i <= n; i += 2)
                s += (double) 1 / i;
            cout << "S3 = " << fixed << setprecision(3) << s << "\n";
            break;
        case 0:
            cout << "Thoat chuong trinh\n";
            return 0;
        default:
            cout << "Lua chon khong hop le\n";
    }
    return 0;
}