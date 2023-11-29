// số chữ số và tổng các chữ số của n
#include <iostream>

using namespace std;

int main()
{
    int n, length = 0, sum = 0;
    do
    {
        cout << "Nhap vao so nguyen n (n > 0): ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 0)" << endl;
    } while (n <= 0);
    int number = n;

    while (n)
    {
        length++;
        sum += n % 10;
        n /= 10;
    }
    cout << "So chu so cua " << number << " la: " << length << endl;
    cout << "Tong cac chu so cua " << number << " la: " << sum << endl;
    return 0;
}