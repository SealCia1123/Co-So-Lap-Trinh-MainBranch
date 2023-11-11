#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void twoNumDescend(int &a, int &b)
{
    if (a < b)
        swap(a, b);
}

void sortThreeNumberAscend(int &a, int &b, int &c)
{

}

int main()
{
    int a, b;
    cout << "Nhap vao 2 so nguyen a, b: ";
    cin >> a >> b;
    twoNumDescend(a, b);
    cout << "Thu tu 2 so giam dan: " << a << " " << b;
    return 0;
}