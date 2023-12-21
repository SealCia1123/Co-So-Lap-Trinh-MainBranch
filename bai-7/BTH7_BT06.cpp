#include <iostream>

using namespace std;

void menu();

// Khai báo các hàm tính toán
int cong(int a, int b);

int tru(int a, int b);

double nhan(int a, int b);

double chia(int a, int b);

int main()
{
    while (true)
    {
        // Khai báo biến lựa chọn và 2 số a, b
        int choice, a, b;
        // Hiện ra menu
        menu();

        //Nhập vao 2 số a, b và lựa chọn phép tính
        cout << "Nhap vao 2 so nguyen: ";
        cin >> a >> b;
        cout << "Chon (1-4): ";
        cin >> choice;

        // Tùy vào lựa chọn sẽ ra kết qua khác nhau
        switch (choice)
        {
            case 1:
                cout << a << " + " << b << " = " << cong(a, b) << endl;
                break;
            case 2:
                cout << a << " - " << b << " = " << tru(a, b) << endl;
                break;
            case 3:
                cout << a << " * " << b << " = " << nhan(a, b) << endl;
                break;
            case 4:
                if (b == 0)
                    cout << "Loi chia cho 0" << endl;
                else
                    cout << a << " / " << b << " = " << chia(a, b) << endl;
                break;
            default:
                cout << "Lua chon khong hop le!" << endl;
                break;
        }

        // Tạo biến tiếp tục và tùy vào lựa chọn của nguười dùng mà sẽ dùng lại hay tiếp tục chương trình
        char isContinue;
        cout << "Tiep tuc (C/K): ";
        cin >> isContinue;
        if (isContinue == 'K' || isContinue == 'k')
        {
            cout << "Ket thuc chuong trinh" << endl;
            return 0;
        }
    }
}

void menu()
{

    {
        cout << "1. Cong" << endl;
        cout << "2. Tru" << endl;
        cout << "3. Nhan" << endl;
        cout << "4. Chia" << endl;
        cout << endl;
    }
}

int cong(int a, int b)
{
    return a + b;
}

int tru(int a, int b)
{
    return a - b;
}

double nhan(int a, int b)
{
    return (double) a * b;
}

double chia(int a, int b)
{
    return (double) a / b;
}
