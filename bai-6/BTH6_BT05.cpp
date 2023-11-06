// viết hàm nhận vào số đo cạnh và xuất ra hình vuông có số đo cạnh đã nhận
#include <iostream>

using namespace std;

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

int main()
{
    int n;
    cout << "Nhap vao so do canh cua hinh vuong: ";
    cin >> n;
    printSquare(n);
    return 0;
}