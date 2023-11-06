// tổng các số chẵn và số lẻ từ 1 -> n
#include <iostream>

using namespace std;

int main()
{
    int n = 2, sumOfOddNumber = 0, sumOfEvenNumber = 0;
    do
    {
        if (n <= 1)
            cout << "Nhap sai gia tri n, nhap lai n nam trong khoang (n > 1)" << endl;
        cout << "Nhap vao so nguyen n (n > 1): ";
        cin >> n;
    } while (n <= 1);

    int number = n;
    while (n)
    {
        if (n % 2 == 0)
            sumOfEvenNumber += n;
        else
            sumOfOddNumber += n;
        n--;
    }
    cout << "Tong cac so chan tu 1 den " << number << ": " << sumOfEvenNumber << endl;
    cout << "Tong cac so le tu 1 den " << number << ": " << sumOfOddNumber << endl;
    return 0;
}
