// hàm tính giai thừa, tổ hợp, in ra tam giác pascal
#include <iostream>
#include <iomanip>

using namespace std;

int calFactorial(int n);

int toHop(int n, int k);

void printTriagle(int h);

int main()
{
    int h;
    cout << "Nhap vao chieu cao h: ";
    cin >> h;
    printTriagle(h);
    return 0;
}

int calFactorial(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial *= i;
    return factorial;
}

int toHop(int n, int k)
{
    int C_k_n = calFactorial(n) / (calFactorial(k) * calFactorial(n - k));
    return C_k_n;
}


void printTriagle(int h)
{
    cout << "  k |  " << setw(6);
    for (int i = 0; i < h; i++)
        cout << i << setw(8);
    cout << endl;
    cout << setw(1);
    for (int i = 0; i < h; i++)
        cout << "_" << setw(4);
    cout << endl;

    cout << endl;
    for (int i = 0; i < h; i++)
    {
        cout << setw(3) << i << " |";
        for (int j = 0; j <= i; j++)
            cout << setw(8) << toHop(i, j);
        cout << endl;
    }
}