// viết hàm nhận vào số đo cạnh và xuất ra hình vuông có số đo cạnh đã nhận
#include <iostream>

using namespace std;

void printSquare(int n);

int main()
{
    int c;
    do
    {
        cout << "Nhap vao so do canh cua hinh vuong (c > 0): ";
        cin >> c;
        if (c <= 0)
            cout << "Nhap sai, nhap lai so do canh cua hinh vuong (c > 0)" << endl;
    } while (c <= 0);
    printSquare(c);
    return 0;
}

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}