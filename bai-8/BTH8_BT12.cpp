// Xoa phan tu trung nhau
#include <iostream>

using namespace std;

void deleteElement(int arr[], int &size, int pos);

void deleteDuplicateElement(int arr[], int &size);

void printArr(const int arr[], int n);

const int MAXSIZE = 100;

int main()
{
    int n, arr[MAXSIZE];
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    deleteDuplicateElement(arr, n);
    cout << "Mang sau khi xoa phan tu lap la: ";
    printArr(arr, n);
    return 0;
}

void deleteElement(int arr[], int &size, int pos)
{
    for (int i = pos; i < size; i++)
        arr[i] = arr[i + 1];
    size--;
}

void deleteDuplicateElement(int arr[], int &size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size; j > i; j--)
        {
            if (arr[i] == arr[j])
                deleteElement(arr, size, j);
        }
    }
}

void printArr(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
