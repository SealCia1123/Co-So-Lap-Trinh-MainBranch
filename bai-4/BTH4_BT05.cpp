// số đảo ngược của n
#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    do
    {
        if (n <= 0)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 0)" << endl;
        cout << "Nhap vao so nguyen n (n > 0): ";
        cin >> n;
    } while (n <= 0);

    int number = n, reversedNum = 0;
    while (n)
    {
        int last = n % 10;
        reversedNum = reversedNum * 10 + last;
        n /= 10;
    }
    cout << "So dao nguoc cua " << number << " la: " << reversedNum << endl;
    return 0;
}