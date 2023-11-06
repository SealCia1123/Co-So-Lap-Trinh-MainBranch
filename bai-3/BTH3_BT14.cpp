#include <iostream>

using namespace std;

int main()
{
    int a, b, c, num1, num2, num3;
    cout << "Nhap vao lan luot 3 so nguyen: ";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (b > c)
        {
            num1 = c;
            num2 = b;
            num3 = a;
        }
        else
        {
            if (a > c)
            {
                num1 = b;
                num2 = c;
                num3 = a;
            }
            else
            {
                num1 = b;
                num2 = a;
                num3 = c;
            }
        }
    }
    else // a < b
    {
        if (a > c)
        {
            num1 = c;
            num2 = a;
            num3 = b;
        }
        else
        {
            if (b > c)
            {
                num1 = a;
                num2 = c;
                num3 = b;
            }
            else
            {
                num1 = a;
                num2 = b;
                num3 = c;
            }
        }
    }
    cout << "Thu tu tang dan cua 3 so la: " << num1 << " " << num2 << " " << num3 << endl;
    return 0;
}