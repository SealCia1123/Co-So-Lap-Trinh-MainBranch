// nhập vào các số nguyên dừng lại khi nhấn Ctrl + Z, in ra số lớn nhất
#include <iostream>

using namespace std;

int main()
{
    int max = -1e5;
    while (!cin.eof())
    {
        int n;
        cout << "Nhap vao so nguyen n: ";
        cin >> n;
        if (n > max)
            max = n;
    }
    cout << "Gia tri lon nhat: " << max << endl;
    system("pause");
    return 0;
}
