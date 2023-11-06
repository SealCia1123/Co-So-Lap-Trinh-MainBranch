#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Nhap vao so nguyen thu nhat: ";
    cin >> a;
    cout << "Nhap vao so nguyen thu hai: ";
    cin >> b;
    if (a > b)
        cout << "So nguyen thu nhat lon hon so nguyen thu hai" << endl;
    else if (a == b)
        cout << "So nguyen thu nhat bang so nguyen thu hai" << endl;
    else
        cout << "So nguyen thu nhat nho hon so nguyen thu hai" << endl;
    return 0;
}