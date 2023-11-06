#include <iostream>

using namespace std;

int countAppearTimes(int arr[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (x == arr[i])
            count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    int arr[n], x;
    cout << "Nhap vao gia tri cua mang: ";
    for (int &i: arr)
        cin >> i;
    cout << "Nhap vao gia tri can kiem tra: ";
    cin >> x;

    if (countAppearTimes(arr, n, x))
        cout << "So lan xuat hien cua phan tu " << x << " la: " << countAppearTimes(arr, n, x) << endl;
    else
        cout << "Phan tu " << x << " khong xuat hien trong mang" << endl;

    return 0;
}