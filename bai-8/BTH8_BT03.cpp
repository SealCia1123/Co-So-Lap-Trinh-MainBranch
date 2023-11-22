/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử), tìm và in ra
phần tử lớn nhất của mảng.
 */
#include <iostream>

#define MAXSIZE 100

using namespace std;

int main()
{
    int arr[MAXSIZE], currentSize, max = arr[0];

    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> currentSize;
    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < currentSize; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    // So sánh nếu phần tử thứ i > max thì đặt lại max = arr[i]
    for (int i = 0; i < currentSize; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Phan tu lon nhat cua mang la: " << max << endl;
    return 0;
}
