/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử), tìm và in ra
phần tử lớn nhất của mảng.
 */
#include <iostream>

using namespace std;

const int MAXSIZE = 100;

int main()
{
    int arr[MAXSIZE], currentSize;

    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> currentSize;
    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < currentSize; i++)
        cin >> arr[i];

    int max = arr[0];
    for (int i = 0; i < currentSize; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Phan tu lon nhat cua mang la: " << max << endl;
    return 0;
}
