// hàm tính chu vi, diện tích hình vuông, vẽ hình vuông rỗng
#include <iostream>

using namespace std;

int squarePerimeter(int n);

int squareArea(int n);

void printSquare(int n, char c);

int main()
{
    int n;
    char c;
    cout << "Nhap vao do dai canh cua hinh vuong: ";
    cin >> n;
    cout << "Chu vi cua hinh vuong la: " << squarePerimeter(n) << endl;
    cout << "Dien tich cua hinh vuong la: " << squareArea(n) << endl;
    cout << "Nhap vao ky tu cua hinh vuong: ";
    cin >> c;
    cout << "Hinh vuong co hinh dang: " << endl;
    printSquare(n, c);
    return 0;
}

int squarePerimeter(int n)
{
    int perimeter = 4 * n;
    return perimeter;
}

int squareArea(int n)
{
    int area = n * n;
    return area;
}

void printSquare(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
                cout << c;
            else if (j == 1 || j == n)
                cout << c;
            else
                cout << " ";
        }
        cout << endl;
    }
}