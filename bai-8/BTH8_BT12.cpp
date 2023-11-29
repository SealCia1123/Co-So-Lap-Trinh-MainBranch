#include <iostream>

using namespace std;

void deleteElement(int arr[], int &size, int value);

void deleteDuplicateElement(int arr[], int &size);

int main()
{
    int n;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    int arr[n];
    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    deleteDuplicateElement(arr, n);
    cout << "Mang sau khi xoa phan tu lap la: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

void deleteElement(int arr[], int &size, int value)
{
    for (int i = value; i < size; i++)
        arr[i] = arr[i + 1];
    size--;
}

void deleteDuplicateElement(int arr[], int &size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                deleteElement(arr, size, j);
                j--;
            }
        }
    }
}
