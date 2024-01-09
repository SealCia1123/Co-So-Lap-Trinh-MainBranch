/*
a) Định nghĩa hằng MAXSIZE là 100.
b) Khai báo mảng values có thể lưu số phần tử tối đa là MAXSIZE, kiểu của mỗi
phần tử là double.
c) Khai báo currentSize lưu số phần tử hiện có trong mảng.
d) Nhập vào giá trị của currentSize.
e) Nhập vào các giá trị trong mảng values, số phần tử đọc vào là currentSize.
f) In các phần tử trong mảng values trên một dòng, cách nhau bởi dấu phẩy.*
 */
#include <iostream>

using namespace std;

const int MAXSIZE = 100;

int main()
{
    double values[MAXSIZE];
    int currentSize;
    cout << "Nhap vao kich thuoc cua mang: ";
    cin >> currentSize;

    cout << "Nhap vao phan tu cua mang: ";
    for (int i = 0; i < currentSize; i++)
        cin >> values[i];

    for (int i = 0; i < currentSize; i++)
    {
        if (i < currentSize - 1)
            cout << values[i] << ", ";
        else
            cout << values[i] << endl;
    }
    return 0;
}
