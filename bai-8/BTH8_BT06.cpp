#include <iostream>

using namespace std;

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
        cout << "Tim thay gia tri " << x << " trong mang!" << endl;
    else
        cout << "Khong tim thay gia tri " << x << " trong mang!" << endl;
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
    cout << "Nhap gia tri vao mang thanh cong!" << endl;
}

void xuat(const int arr[], int arrSize)
{
    cout << "Mang gom co " << arrSize << " phan tu, gia tri cua mang la: ";
    for (int i = 0; i < arrSize; i++)
        if (i == arrSize - 1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << ", ";
}

bool tim(const int arr[], int arrSize, int x)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

void daonguoc(int arr[], int arrSize)
{
    cout << "Mang dao nguoc la: ";
    for (int i = arrSize - 1; i >= 0; i--)
    {
        if (i == 0)
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
    cout << "Xoa phan tu thu " << p << " thanh cong!" << endl;
}
