// viết hàm xóa các phần tử trùng nhau trong mảng
#include <iostream>

using namespace std;

void deleteElementArr(int arr[], int &arrSize, int x)
{
    for (int i = x; i < arrSize; i++)
        arr[i] = arr[i + 1];
    arrSize--;
}

void deleteDuplicate(int arr[], int &size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                deleteElementArr(arr, size, j);
        }
    }
}

int main()
{
    int n;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    int arr[n];
    cout << "Nhap vao cac phan tu cua mang: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    deleteDuplicate(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
