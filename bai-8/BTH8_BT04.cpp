#include <iostream>

#define MAXSIZE 100

using namespace std;

int main()
{
    int arr[MAXSIZE], currentSize, sumOfArray = 0, averageOfArray;
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

    for (int i = 0; i < currentSize; i++)
    {
        sumOfArray += arr[i];
    }
    averageOfArray = sumOfArray / currentSize;

    cout << "Tong cac phan tu trong mang la: " << sumOfArray << endl;
    cout << "Gia tri trung binh cua cac phan tu trong mang la: " << averageOfArray << endl;
    return 0;
}