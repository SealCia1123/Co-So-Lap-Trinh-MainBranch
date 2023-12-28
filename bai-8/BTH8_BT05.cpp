/*
 Viết chương trình nhập vào một mảng số nguyên (tối đa 100 phần tử) và vị trí của
phần tử cần xóa, xóa phần tử tại vị trí đã nhập và in ra mảng sau khi xóa.
 */
#include <iostream>

using namespace std;

const int MAXSIZE = 100;

int main()
{
    int arr[MAXSIZE], currentSize, deleteIndex;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> currentSize;
    cout << "Nhap vao gia tri cua mang: ";

    for (int i = 0; i < currentSize; i++)
        cin >> arr[i];

    cout << "Nhap vao index can xoa: ";
    cin >> deleteIndex;
    for (int i = deleteIndex; i < currentSize; i++)
        arr[i] = arr[i + 1];

    currentSize--;
    cout << "Mang sau khi xoa phan tu: ";
    for (int i = 0; i < currentSize; i++)
        cout << arr[i] << " ";
    return 0;
}
