/*
 * tính tổng:
 * S1 = 1 + 2^2 + 3^2 + ... + n^2
 * S2 = 1 + 1/2 + 1/3 + ... + 1/n
 * S3 = 1 + 1/3 + 1/5 + ... + 1 / (2n- 1)
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    double s1 = 0, s2 = 0, s3 = 0;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s1 += i * i;
        s2 += 1.0 / (double) i;
        if (i % 2 != 0)
            s3 += 1.0 / (double) i;
    }
    cout << "S1 = " << s1 << endl;
    cout << "S2 = " << s2 << endl;
    cout << "S3 = " << s3 << endl;
    return 0;
}