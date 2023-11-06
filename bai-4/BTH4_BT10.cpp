//Tính thừa số nguyên tố
#include <iostream>

using namespace std;

int main()
{
    int n = 1, i = 2;
    do
    {
        if (n <= 0)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 0)" << endl;
        cout << "Nhap vao so nguyen n (n > 0): ";
        cin >> n;
    } while (n <= 0);

    while (i <= n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        else
            i++;
    }
    return 0;
}