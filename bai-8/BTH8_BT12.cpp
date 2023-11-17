// viết hàm xóa các phần tử trùng nhau trong mảng
#include <iostream>

using namespace std;

void deleteElementArr(int arr[], int &n, int x)
{
    for (int i = x; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteDuplicate(int arr[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                deleteElementArr(arr, n, j);
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
    for (int i: arr)
        cout << i << " ";
    return 0;
}
