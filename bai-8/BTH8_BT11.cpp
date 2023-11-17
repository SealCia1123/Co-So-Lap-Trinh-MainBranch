// Sắp xếp phần tử trong mảng tăng dần
#include <iostream>

using namespace std;

void swap(int &a, int &b);

void sortArray(int arr[], int n);

int main()
{
    int n;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    int arr[n];

    cout << "Nhap vao gia tri cua mang: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sortArray(arr, n);
    cout << "Thu tu mang sap xep tang dan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

