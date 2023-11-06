#include <iostream>

using namespace std;

int main()
{
    int n, abs;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    abs = n;
    if (n < 0)
        abs = n * -1;
    cout << "Gia tri tuyet doi cua n la: " << abs << endl;
    return 0;
}