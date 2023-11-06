#include <iostream>

using namespace std;

int minIndex(const int arr[], int size)
{
    int min = 1e9, minIndex;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main()
{
    int arrSize;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> arrSize;
    int arr[arrSize];
    cout << "Nhap vao gia tri cua mang: ";
    for (int &x: arr)
        cin >> x;
    cout << "Index cua phan tu co gia tri nho nhat trong mang la: " << minIndex(arr, arrSize) << endl;
    return 0;
}