// tính n giai thừa
#include <iostream>

using namespace std;

int main()
{
    int n, result = 1;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        result *= i;

    cout << "Giai thua cua " << n << " la: " << result << endl;
    return 0;
}