/*
 * Viet chuong trinh chon 1, 2
 * 1. Tinh tich cac chu so le cua so nguyen duong n
 * 12345 -> 15
 * 2. In ra tam giac
 *
 * ABCDEF
 *  ABCDE
 *   ABCD
 *    ABC
 *     AB
 *      A
 */
#include "iostream"
#include "iomanip"

using namespace std;

void menu();

void inBangChuCai(int n);

int TinhTichSoLe(int n);

int main()
{
    int choice, n;
    menu();
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "TINH TICH CAC CHU SO LE CUA SO NGUYEN DUONG N\n";
            do
            {
                cout << "Nhap so nguyen duong n: ";
                cin >> n;
                if (n < 1)
                    cout << "Nhap sai, nhap lai so nguyen duong n (n > 0)\n";
            } while (n < 1);
            if (TinhTichSoLe(n) == -1)
                cout << "So " << n << " khong co chu so le\n";
            else
                cout << "Tich cac chu so le cua " << n << " la: " << TinhTichSoLe(n);
            break;

        case 2:
            cout << "IN TAM GIAC CHU CAI\n";
            do
            {
                cout << "Nhap vao so nguyen duong n: ";
                cin >> n;
                if (n < 1)
                    cout << "Nhap sai, nhap lai so nguyen duong n (n > 0)\n";
            } while (n < 1);
            inBangChuCai(n);
            break;

        default:
            cout << "Ket thuc chuong trinh\n";
            return 0;
    }
    return 0;
}

void inBangChuCai(int n)
{
    for (int i = n; i >= 1; i--)
    {
        cout << setw(n - i + 1);
        for (int j = 65; j <= 65 + i - 1; j++)
            cout << (char) j;
        cout << endl;
    }
}

int TinhTichSoLe(int n)
{
    int countOdd = 0, result = 1;
    while (n)
    {
        int temp = n % 10;
        if (temp & 1)
        {
            result *= temp;
            countOdd++;
        }
        n /= 10;
    }
    if (countOdd != 0)
        return result;
    return -1;
}

void menu()
{
    cout << "1. Tinh tich cac chu so le\n";
    cout << "2. In tam giac chu cai\n";
    cout << "So khac: ket thuc\n";
    cout << "Chon: ";
}