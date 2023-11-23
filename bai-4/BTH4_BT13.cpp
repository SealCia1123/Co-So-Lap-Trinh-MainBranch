// nhập vào các số nguyên dừng lại khi nhấn Ctrl + Z, in ra số lớn nhất
#include <iostream>

using namespace std;

int main()
{
    int max = -1e8, min = 1e8, sum = 0;
    while (true)
    {
        int n;
        cout << "Nhap vao so nguyen n: ";
        cin >> n;
        if (cin.get() == EOF)
            break;
        if (n > max)
            max = n;
        if (n < min)
            min = n;
        sum += n;
    }
    cout << "Gia tri lon nhat: " << max << endl;
    cout << "Gia tri nho nhat: " << min << endl;
    cout << "Tong cac so vua nhap la: " << sum << endl;
    system("pause");
    return 0;
}
