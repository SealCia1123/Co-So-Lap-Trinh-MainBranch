#include <iostream>
#include <iomanip>

using std::cout, std::cin, std::endl, std::fixed, std::setprecision;

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
                cout << "TIM CHU SO NHO NHAT TRONG MOT SO NGUYEN\n";
                do
                {
                    cout << "Nhap vao so nguyen n (n > 0): ";
                    cin >> n;
                    if (n <= 0)
                        cout << "Nhap sai, nhap lai n > 0\n";
                } while (n <= 0);
                cout << "Chu so nho nhat trong " << n << " la: " << ChuSoNhoNhat(n) << endl;
                break;

            case 2:
                cout << "Tinh S(n) = 1/3 + 1/5 - 1/7 + 1/9 ... + 1/(2n + 1)\n";
                do
                {
                    cout << "Nhap vao so nguyen n (n > 0): ";
                    cin >> n;
                    if (n <= 0)
                        cout << "Nhap sai, nhap lai n > 0\n";
                } while (n <= 0);
                cout << "S(" << n << "): " << fixed << setprecision(4) << s(n) << endl;
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
    int temp = 0;
    double result = 0;
    for (int i = 3; i <= n; i += 2)
    {
        double tam = (double) 1 / i;
        if (temp % 2 == 0)
            tam = tam * -1;
        result += tam;
        temp++;
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
    cout << "2. Tinh S(n) = 1/3 + 1/5 - 1/7 + 1/9 ... + 1/(2n + 1)\n";
    cout << "Chon 1 hoac 2: ";
}
