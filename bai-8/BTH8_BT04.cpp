/*
Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử), tính và in ra
tổng và giá trị trung bình của các phần tử trong mảng.
 */
#include <iostream>

#define MAXSIZE 100

using namespace std;

int main()
{
    int arr[MAXSIZE], currentSize, sumOfArray = 0, averageOfArray;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> currentSize;
    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < currentSize; i++)
        cin >> arr[i];

    for (int i = 0; i < currentSize; i++)
        sumOfArray += arr[i];

    averageOfArray = sumOfArray / currentSize;

    cout << "Tong cac phan tu trong mang la: " << sumOfArray << endl;
    cout << "Gia tri trung binh cua cac phan tu trong mang la: " << averageOfArray << endl;
    return 0;
}