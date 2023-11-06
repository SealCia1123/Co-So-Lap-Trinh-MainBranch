// chương trình có hiện menu phép tính và cho người dùng lựa chọn sau đó nhập 2 số và in ra kq phép tính
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    while (true)
    {
        int n, a, b;
        cout << "1. Phep cong (+)" << endl;
        cout << "2. Phep tru (-)" << endl;
        cout << "3. Phep nhan (*)" << endl;
        cout << "4. Phep chia (/)" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "Nhap vao lua chon: ";
        cin >> n;
        switch (n)
        {
            case 1:
                cout << "Nhap vao 2 so nguyen: ";
                cin >> a >> b;
                cout << "Ket qua phep cong " << a << " + " << b << " = " << a + b << endl;
                break;

            case 2:
                cout << "Nhap vao 2 so nguyen: ";
                cin >> a >> b;
                cout << "Ket qua phep tru " << a << " - " << b << " = " << a - b << endl;
                break;

            case 3:
                cout << "Nhap vao 2 so nguyen: ";
                cin >> a >> b;
                cout << "Ket qua phep nhan " << a << " * " << b << " = " << a * b << endl;
                break;

            case 4:
                cout << "Nhap vao 2 so nguyen: ";
                cin >> a >> b;
                if (b != 0)
                {
                    cout << "Ket qua cua phep chia " << a << " / " << b << " = " << fixed << setprecision(2)
                         << (double) a / b
                         << endl;
                }
                else
                    cout << "Loi chia cho so 0" << endl;
                break;

            case 0:
                cout << "Thoat chuong trinh" << endl;
                return 0;
            default:
                cout << "Lua chon khong hop le!" << endl;
                break;
        }
        bool isContinue;
        cout << "Ban co muon tiep tuc chuong trinh? (1/0): ";
        cin >> isContinue;
        if (!isContinue)
        {
            cout << "Thoat chuong trinh" << endl;
            return 0;
        }
    }
}