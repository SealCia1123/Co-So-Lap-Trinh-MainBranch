#include <iostream>

using namespace std;

void swap(int &a, int &b);

void ascend(int &a, int &b);

int main()
{
    int a, b;
    cout << "Nhap vao 2 so nguyen a va b: ";
    cin >> a >> b;
    ascend(a, b);
    cout << "Thu tu tang dan: " << a << ", " << b << endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void ascend(int &a, int &b)
{
    if (a > b)
        swap(a, b);
}