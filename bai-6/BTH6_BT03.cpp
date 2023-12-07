// viết hàm tính mũ
#include <iostream>

using namespace std;

double myPow(double x, int y);

int main()
{
    double x;
    int y;
    cout << "Nhap vao 2 so nguyen: ";
    cin >> x >> y;
    cout << "Ket qua cua phep mu " << x << " va " << y << " la: " << myPow(x, y) << endl;
    return 0;
}

double myPow(double x, int y)
{
    double result = 1;
    if (y == 0)
        result = 1;
    else if (y > 0)
    {
        for (int i = 1; i <= y; i++)
            result *= x;
    }
    else
    {
        for (int i = 1; i <= -y; i++)
            result /= x;
    }
    return result;
}