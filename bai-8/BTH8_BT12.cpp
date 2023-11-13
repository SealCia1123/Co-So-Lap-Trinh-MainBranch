#include <iostream>

using namespace std;

void deleteElement(int *arr, int x, int &n)
{
    for (int i = x; i < n; i++)
        arr[i] = arr[i + 1];
    n--;
}

void deleteDuplicate(int *&arr, int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                deleteElement(arr, j, n);
        }
    }
}

int main()
{
    int n;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    int arr[n];
    cout << "Nhap vao gia tri cua mang: ";
    for (int &i: arr)
        cin >> i;
    deleteElement(arr, n);
    return 0;
}
