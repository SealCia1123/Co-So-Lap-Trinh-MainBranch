// nhập vào n1, n2 đếm từ n1 -> n2 có bao nhiêu số chẵn, lẻ, ước của 10
#include <iostream>

using namespace std;

int main()
{
    int n1, n2, countOddNum = 0, countEvenNum = 0, uocSo = 0;
    do
    {
        cout << "Nhap vao 2 so nguyen n1 va n2 (n1 < n2): ";
        cin >> n1 >> n2;
    } while (n1 >= n2);

    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
            countEvenNum++;
        else
            countOddNum++;
        if (10 % i == 0)
            uocSo++;
    }
    cout << "Tu " << n1 << " den " << n2 << " co " << countOddNum << " so le" << endl;
    cout << "Tu " << n1 << " den " << n2 << " co " << countEvenNum << " so chan" << endl;
    cout << "Tu " << n1 << " den " << n2 << " co " << uocSo << " uoc so cua 10" << endl;
    return 0;
}