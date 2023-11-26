// hàm kiểm tra số đối xứng, vd: 161 là số đối xứng
#include <iostream>

using namespace std;

bool isPalindrome(int n);

int main()
{
    int n;
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
    if (isPalindrome(n))
        cout << "So " << n << " la so doi xung" << endl;
    else
        cout << "So " << n << " khong phai la so doi xung" << endl;
    return 0;
}

bool isPalindrome(int n)
{
    int reversedNum = 0, temp = n;
    while (temp) {
        int lastDigit = temp % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        temp /= 10;
    }
    if (reversedNum == n)
        return true;
    return false;
}
