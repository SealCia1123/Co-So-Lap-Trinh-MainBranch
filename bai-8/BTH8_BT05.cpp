#include <iostream>

#define MAXSIZE 100

using namespace std;

int main()
{
    int arr[MAXSIZE], currentSize, deleteIndex;
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

    cout << "Nhap vao index can xoa: ";
    cin >> deleteIndex;
    for (int i = deleteIndex; i < currentSize; i++)
        arr[i] = arr[i + 1];
    --currentSize;
    cout << "Mang sau khi xoa phan tu: ";
    for (int i = 0; i < currentSize; i++)
        cout << arr[i] << " ";
    return 0;
}
