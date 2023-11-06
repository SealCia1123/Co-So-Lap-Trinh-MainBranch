// chuyển hệ 2 -> hệ 10
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int binaryNumber, decimalNumber = 0, index = 0;
    cout << "Nhap vao so he nhi phan: ";
    cin >> binaryNumber;

    while (binaryNumber)
    {
        int lastDigit = binaryNumber % 10;
        decimalNumber += lastDigit * (int) pow(2, index);
        binaryNumber /= 10;
        index++;
    }
    cout << "So he thap phan la: " << decimalNumber << endl;
    return 0;
}
