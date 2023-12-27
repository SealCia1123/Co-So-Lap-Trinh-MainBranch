// De thi giua ky:
// Cho so n, xet nhung so le tang, giam hay khong
// theo thu tu
#include <iostream>

using namespace std;

int check(const int arr[], int size);

int main()
{
    int n, oddNum = 0, arrSize = 0;
    do
    {
        cout << "Nhap n (n > 0): ";
        cin >> n;
        if (n <= 0)
            cout << "Nhap sai, nhap lai n > 0\n";
    } while (n <= 0);

    // Tach so le
    while (n)
    {
        int temp = n % 10;
        if (temp & 1)
        {
            oddNum = oddNum * 10 + temp;
            ++arrSize;
        }
        n /= 10;
    }

    // Dua so vao mang
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        int temp = oddNum % 10;
        arr[i] = temp;
        oddNum /= 10;
    }

    int result = check(arr, arrSize);
    if (result == 1)
        cout << "Tang\n";
    else if (result == -1)
        cout << "Giam\n";
    if (result == 0)
        cout << "Khong theo thu tu\n";
    return 0;
}

int check(const int arr[], int size)
{
    // Tao bien dem tang, giam
    int countUp = 0, countDown = 0;
    for (int i = 0; i < size - 1; i++)
    {
        // TH neu 2 so dang xet = nhau
        if (arr[i] == arr[i + 1])
        {
            // So tiep so sau so dang xet
            if (arr[i - 1] > arr[i + 1])
                countDown++;
            if (arr[i - 1] < arr[i + 1])
                countUp++;
        }
        // TH day so tang
        if (arr[i] < arr[i + 1])
            countUp++;
        // TH day so giam
        if (arr[i] > arr[i + 1])
            countDown++;
    }
    // Neu cap so tang = sl cap thi return 1
    if (countUp == size - 1)
        return 1;
    // TH giam thi return -1
    if (countDown == size - 1)
        return -1;
    // TH khong theo thu tu return 0
    return 0;
}

