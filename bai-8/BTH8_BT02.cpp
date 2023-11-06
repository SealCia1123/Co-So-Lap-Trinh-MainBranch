#include <iostream>
// Định nghĩa hằng MAXSIZE = 100
#define MAXSIZE 100

using namespace std;

int main()
{
    double values[MAXSIZE];
    int currentSize;
    cout << "Nhap vao so luong phan tu trong mang: ";
    cin >> currentSize;
    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < currentSize; i++)
    {
        // Tạo biến temp tạm thời, nhập giá trị vào temp rồi đặt values[i] = temp
        int temp;
        cin >> temp;
        values[i] = temp;
    }
    for (int i = 0; i < currentSize; i++)
    {
        // Kiểm tra nếu i là phần tử cuối sẽ không in ra dấu ',', còn lại in ra bình thường
        if (i == currentSize - 1)
        {
            cout << values[i] << endl;
        }
        else
        {
            cout << values[i] << ", ";
        }
    }
    return 0;
}
