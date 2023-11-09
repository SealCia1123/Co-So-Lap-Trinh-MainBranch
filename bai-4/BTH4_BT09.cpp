// số lượng ước của 10 trong khoảng n1 -> n2
#include <iostream>

using namespace std;

int main()
{
    int n1 = 1, n2 = 2, count = 0;
    do
    {
        if (n1 > n2)
            cout << "Nhap sai, nhap lai n1, n2 trong khoang (n1 < n2)" << endl;
        cout << "Nhap vao 2 so nguyen duong n1 va n2 (n2 > n1): ";
        cin >> n1 >> n2;
    } while (n1 > n2);

    int i = n1;
    while (i <= n2)
    {
        if (10 % i == 0)
            count++;
        i++;
    }
    cout << "So luong uoc so cua 10 trong khoang " << n1 << " va " << n2 << " la: " << count << endl;
    return 0;
}