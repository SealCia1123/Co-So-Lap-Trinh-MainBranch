// hàm tính giai thừa, tổ hợp, in ra tam giác pascal
#include <iostream>

using namespace std;

int calFactorial(int n);

int toHop(int n, int k);

void printTriagle(int h);

int main()
{
    int factorial, k, n, h;
    cout << "Nhap vao so nguyen n can tinh giai thua: ";
    cin >> factorial;
    cout << "Giai thua cua " << factorial << " la: " << calFactorial(factorial) << endl;
    cout << "Nhap vao to hop chap k cua n: ";
    cin >> k >> n;
    cout << "To hop chap k cua n la: " << toHop(n, k) << endl;
    cout << "Nhap vao chieu cao h: ";
    cin >> h;
    printTriagle(h);
    return 0;
}

int calFactorial(int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return 1;
    else
        return n * calFactorial(n - 1);
}

int toHop(int n, int k)
{
    int C_k_n = calFactorial(n) / (calFactorial(k) * calFactorial(n - k));
    return C_k_n;
}


void printTriagle(int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " " << toHop(i, j);
        }
        cout << endl;
    }
}