// tính n giai thừa
#include <iostream>

using namespace std;

int main()
{
    int n, result = 1;
    do
    {

        cout << "Nhap vao so nguyen duong n: ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai, nhap lai n trong khoang gia tri (n > 0)" << endl;
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
        result *= i;

    cout << "Giai thua cua " << n << " la: " << result << endl;
    return 0;
}