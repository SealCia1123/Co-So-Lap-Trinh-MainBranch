// tổng các số chẵn và số lẻ từ 1 -> n
#include <iostream>

using namespace std;

int main()
{
    int n, sumOddNumber = 0, sumEvenNumber = 0;
    do
    {
        cout << "Nhap vao so nguyen n (n > 1): ";
        cin >> n;
        if (n <= 1)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 1)" << endl;
    } while (n <= 1);

    int number = n;
    while (n)
    {
        if (n % 2 == 0)
            sumEvenNumber += n;
        else
            sumOddNumber += n;
        n--;
    }
    cout << "Tong cac so chan tu 1 den " << number << ": " << sumEvenNumber << endl;
    cout << "Tong cac so le tu 1 den " << number << ": " << sumOddNumber << endl;
    return 0;
}
