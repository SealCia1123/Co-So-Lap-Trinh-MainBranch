//Tính thừa số nguyên tố
#include <iostream>

using namespace std;

int main()
{
    int n, i = 2;
    do
    {
        cout << "Nhap vao so nguyen n (n > 0): ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 0)" << endl;
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