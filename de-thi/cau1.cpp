// Cau 1
/*
 * Tao menu co 2 ham chuc nang
 * Ham 1: Tim chu so nho nhat trong mot so nguyen
 * Ham 2: Tinh S(n) = 1/3 + 1/5 - 1/7 + 1/9 ... + 1/
 * (2n + 1)
 */
#include <iostream>
#include <iomanip>

using namespace std;

int ChuSoNhoNhat(int n);

double s(int n);

void menu();

int main()
{
    int choice, n;
    while (true)
    {
        menu();
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout
                        << "TIM CHU SO NHO NHAT TRONG MOT SO NGUYEN\n";
                do
                {
                    cout
                            << "Nhap vao so nguyen n (n > 0): ";
                    cin >> n;
                    if (n <= 0)
                        cout
                                << "Nhap sai, nhap lai n > 0\n";
                } while (n <= 0);
                cout << "Chu so nho nhat trong " << n
                     << " la: " << ChuSoNhoNhat(n) << endl;
                break;

            case 2:
                cout
                        << "Tinh S(n) = 1/3 + 1/5 - 1/7 + 1/9 ... + 1/(2n + 1)\n";
                do
                {
                    cout
                            << "Nhap vao so nguyen n (n > 0): ";
                    cin >> n;
                    if (n <= 0)
                        cout
                                << "Nhap sai, nhap lai n > 0\n";
                } while (n <= 0);
                cout << "S(" << n << "): " << fixed
                     << setprecision(4) << s(n) << endl;
                break;

            default:
                cout << "Lua chon khong hop le\n";
        }

        cout << "Tiep tuc? (Nhap Y de tiep tuc): ";
        char isContinue;
        cin >> isContinue;
        if (isContinue != 'Y' && isContinue != 'y')
        {
            cout << "Ket thuc chuong trinh\n";
            return 0;
        }
        system("clear");
    }
}

double s(int n)
{
    double result = (double) 1 / 3;
    for (int i = 2; i <= n; i++)
    {
        if (i & 1)
            result -= (double) 1 / (2 * i + 1);
        else
            result += (double) 1 / (2 * i + 1);
    }
    return result;
}

int ChuSoNhoNhat(int n)
{
    int min = n % 10;
    while (n)
    {
        int temp = n % 10;
        if (min > temp)
            min = temp;
        n /= 10;
    }
    return min;
}

void menu()
{
    cout << "1. Tim so nho nhat trong mot so nguyen\n";
    cout
            << "2. Tinh S(n) = 1/3 + 1/5 - 1/7 + 1/9 ... + 1/(2n + 1)\n";
    cout << "Chon 1 hoac 2: ";
}
