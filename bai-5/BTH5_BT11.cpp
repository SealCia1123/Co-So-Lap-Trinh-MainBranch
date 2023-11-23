// nhập vào chiều dài của hình vuông sau đó in ra 2 hình vuông
#include <iostream>

using namespace std;

int main()
{
    int c;
    do
    {
        cout << "Nhap vao chieu dai canh hinh vuong c (c > 0): ";
        cin >> c;
        if (c <= 0)
            cout << "Nhap sai, nhap lai c trong khoang gia tri (c > 0)" << endl;
    } while (c <= 0);

    cout << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c; j++)
            cout << "*";
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= c; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == c)
                cout << "*";
            else if (j == 1 || j == c)
                cout << "*";
            else
                cout << " ";

        }
        cout << endl;
    }
    return 0;
}