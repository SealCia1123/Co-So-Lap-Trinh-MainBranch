// Tìm ước chung lớn nhất
#include <iostream>

using namespace std;

int uocChungLonNhat(int m, int n);

int main()
{
    int tuSo, mauSo;
    cout << "Nhap vao lan luot tu so va mau so: ";
    cin >> tuSo >> mauSo;
    if (mauSo == 0)
        cout << "Loi chia cho 0" << endl;
    else if (tuSo == 0)
        cout << 0 << endl;
    else
    {
        int uoc = uocChungLonNhat(tuSo, mauSo);
        cout << "Ket qua rut gon phan so: " << tuSo / uoc << "/"
             << mauSo / uoc << endl;
    }
    return 0;
}

int uocChungLonNhat(int m, int n)
{
    if (n == 0)
        return m;
//    int r = m % n;
//    return uocChungLonNhat(n, r);
    while (n)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}