#include <iostream>

using namespace std;

int fibonacci(int n);

int main()
{
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    cout << "So fibonacci thu " << n << " la: " << fibonacci(n) << endl;
    return 0;
}

int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    int u = 0, v = 1, i = 2, t;
    do
    {
        t = u + v;
        u = v;
        v = t;
        i++;
    } while (i < n);
    return t;
}

