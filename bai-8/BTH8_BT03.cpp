#include <iostream>

#define MAXSIZE 100

using namespace std;

int main()
{
    // Khai báo mảng int arr, sl phần tử của mảng, cho max = phần tử đầu của mảng
    int arr[MAXSIZE], currentSize, max = arr[0];

    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> currentSize;
    cout << "Nhap vao gia tri cua mang: ";
    // Nhập giá trị phần tử vào mảng
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
        {
            max = arr[i];
        }
    }

    cout << "Phan tu lon nhat cua mang la: " << max << endl;
    return 0;
}
