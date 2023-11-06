#include <iostream>

using namespace std;

int main()
{
    int soThuNhat, soThuHai;
    char phepTinh;
    cout << "Nhap vao 2 so nguyen va 1 phep tinh: ";
    cin >> soThuNhat >> soThuHai >> phepTinh;
    switch (phepTinh)
    {
        case '+':
            cout << soThuNhat << " " << phepTinh << " " << soThuHai << " = " << soThuNhat + soThuHai << endl;
            break;
        case '-':
            cout << soThuNhat << " " << phepTinh << " " << soThuHai << " = " << soThuNhat - soThuHai << endl;
            break;
        case '/':
            if (soThuHai != 0)
            {
                cout << soThuNhat << " " << phepTinh << " " << soThuHai << " = " << soThuNhat / soThuHai << endl;
                break;
            }
            else
            {
                cout << "Loi chia cho 0" << endl;
                break;
            }
        case '*':
            cout << soThuNhat << " " << phepTinh << " " << soThuHai << " = " << soThuNhat * soThuHai << endl;
            break;
        default:
            cout << "Phep tinh nhap vao khong hop le" << endl;
            break;
    }
    return 0;
}