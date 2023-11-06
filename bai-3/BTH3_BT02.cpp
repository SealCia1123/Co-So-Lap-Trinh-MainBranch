#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap vao a: ";
    cin >> a;
    cout << "Nhap vao b: ";
    cin >> b;
    cout << "So lon hon la: ";
    if (a >= b)
        cout << a << endl;
    else
        cout << b << endl;
    return 0;
}