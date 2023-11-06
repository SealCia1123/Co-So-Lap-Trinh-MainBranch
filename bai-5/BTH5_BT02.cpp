// nhập m số nguyên và tính tổng số lượng số nguyên m
#include <iostream>

using namespace std;

int main()
{
    int m, sum = 0;
    cout << "Ban can nhap bao nhieu so: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cout << "Nhap so thu " << i << ": ";
        cin >> x;
        sum += x;
    }
    cout << "Tong " << m << " so vua nhap la: " << sum << endl;
    return 0;
}