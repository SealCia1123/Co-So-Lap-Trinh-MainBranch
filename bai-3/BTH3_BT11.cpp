#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    if (n > 0)
        cout << "So nguyen " << n << " la so nguyen duong" << endl;
    else if (n == 0)
        cout << "So nguyen " << n << " la so 0" << endl;
    else
        cout << "So nguyen " << n << " la so nguyen am" << endl;
    return 0;
}