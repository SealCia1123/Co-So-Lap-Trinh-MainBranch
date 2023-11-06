// Tìm ước chung lớn nhất
#include <iostream>

using namespace std;

int uocChungLonNhat(int m, int n)
{
    if (n == 0)
        return m;
    else
    {
        int r = m % n;
        return uocChungLonNhat(n, r);
    }
}

int main()
{
    int tuSo, mauSo;
    cout << "Nhap vao lan luot tu so va mau so: ";
    cin >> tuSo >> mauSo;

    cout << "Ket qua rut gon phan so: " << tuSo / uocChungLonNhat(tuSo, mauSo) << "/"
         << mauSo / uocChungLonNhat(tuSo, mauSo) << endl;
    return 0;
}
