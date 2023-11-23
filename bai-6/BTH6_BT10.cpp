// hàm kiểm tra số hoàn thiện, VD số hoàn thiện: 6 = 1 + 2 + 3, tổng các số là ước của n = n
#include <iostream>

using namespace std;

bool checkPerfectNumber(int n);

int main()
{
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    if (checkPerfectNumber(n))
        cout << "So " << n << " la so hoan thien" << endl;
    else
        cout << "So " << n << " khong phai la so hoan thien" << endl;
    return 0;
}

bool checkPerfectNumber(int n)
{
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            result += i;
    }
    if (result == n)
        return true;
    return false;
}
