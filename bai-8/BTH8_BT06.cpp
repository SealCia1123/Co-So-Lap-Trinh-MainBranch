/*
 * viết các hàm:
 *  a. Hàm nhập dãy số vào mảng
 *  b. Hàm in các số trong mảng, cách nhau bởi dấu phây
 *  c. Hàm tìm giá trị trong mảng và trả về boolean
 *  d. Hàm đảo ngược các phần tử của mảng
 */
#include <iostream>

using namespace std;

void swap(int &a, int &b);

void nhap(int arr[], int arrSize);

void xuat(const int arr[], int arrSize);

bool tim(const int arr[], int arrSize, int x);

void daonguoc(int arr[], int arrSize);

void xoa(int arr[], int &arrSize, int p);

int main()
{
    int arrSize, x, deleteIndex;
    cout << "Nhap vao kich thuot cua mang: ";
    cin >> arrSize;
    int arr[arrSize];
    nhap(arr, arrSize);
    xuat(arr, arrSize);
    cout << "Nhap vao gia tri can tim: ";
    cin >> x;
    if (tim(arr, arrSize, x))
        cout << "Tim thay gia tri " << x << " trong mang" << endl;
    else
        cout << "Khong tim thay gia tri " << x << " trong mang" << endl;
    daonguoc(arr, arrSize);
    cout << "Nhap vao vi tri phan tu can xoa: ";
    cin >> deleteIndex;
    xoa(arr, arrSize, deleteIndex);
    xuat(arr, arrSize);

    return 0;
}

void nhap(int arr[], int arrSize)
{
    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < arrSize; i++)
    {
        int value;
        cin >> value;
        arr[i] = value;
    }
}

void xuat(const int arr[], int arrSize)
{
    cout << "Mang gom co " << arrSize << " phan tu, gia tri cua mang la: ";
    for (int i = 0; i < arrSize; i++)
    {
        if (i == arrSize - 1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << ", ";
    }
}

bool tim(const int arr[], int arrSize, int x)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == x)
            return true;
    }
    return false;
}

void daonguoc(int arr[], int arrSize)
{
    cout << "Mang dao nguoc la: ";
    int left = 0, right = arrSize - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < arrSize; i++)
    {
        if (i == arrSize - 1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << ", ";
    }
}

void xoa(int arr[], int &arrSize, int p)
{
    for (int i = p; i < arrSize; i++)
        arr[i] = arr[i + 1];
    --arrSize;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}