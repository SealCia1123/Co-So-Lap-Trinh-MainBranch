// viết hàm tìm số lớn hơn giữa 2 số, số lớn nhất giữa 3 số
#include <iostream>

using namespace std;

int biggerOfTwo(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}

int biggestOfThree(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else if (c > a && c > b)
        return c;
}

int main()
{
    int num1, num2;
    cout << "Nhap vao 2 so nguyen: ";
    cin >> num1 >> num2;
    cout << "So lon hon trong 2 so la: " << biggerOfTwo(num1, num2) << endl;
    int num3, num4, num5;
    cout << "Nhap vao 3 so nguyen: ";
    cin >> num3 >> num4 >> num5;
    cout << "So lon nhat trong 3 so la: " << biggestOfThree(num3, num4, num5) << endl;
    return 0;
}