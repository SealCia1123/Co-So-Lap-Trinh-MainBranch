#include <iostream>

using namespace std;

void swap(int &a, int &b);

void twoNumDescend(int &a, int &b);

void threeNumAscend(int &a, int &b, int &c);

void threeNumDescend(int &a, int &b, int &c);


int main()
{
    int num1, num2;
    cout << "Nhap vao 2 so nguyen: ";
    cin >> num1 >> num2;
    twoNumDescend(num1, num2);
    cout << "Thu tu 2 so giam dan: " << num1 << " " << num2 << endl;

    int num3, num4, num5;
    cout << "Nhap vao 3 so nguyen: ";
    cin >> num3 >> num4 >> num5;
    threeNumAscend(num3, num4, num5);
    cout << "Thu tu 3 so tang dan: " << num3 << " " << num4 << " " << num5 << endl;

    int num6, num7, num8;
    cout << "Nhap vao 3 so nguyen: ";
    cin >> num6 >> num7 >> num8;
    threeNumDescend(num6, num7, num8);
    cout << "Thu tu 3 so giam dan: " << num6 << " " << num7 << " " << num8 << endl;
    return 0;
}

void threeNumDescend(int &a, int &b, int &c)
{
    if (a < b)
        swap(a, b);
    if (a < c)
        swap(a, c);
    if (b < c)
        swap(b, c);
}

void threeNumAscend(int &a, int &b, int &c)
{
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
}

void twoNumDescend(int &a, int &b)
{
    if (a < b)
        swap(a, b);
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
