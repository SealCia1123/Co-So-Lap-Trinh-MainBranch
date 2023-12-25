#include <iostream>
#include <random>

using namespace std;

void generateArray(int arr[], int size);

void printArray(const int arr[], int size);

void printMaxMin(const int arr[], int size);

void speacialSort(int arr[], int size);

void sort(int arr[], int start, int end);

void swap(int &a, int &b);

int main()
{
    int size;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> size;
    int arr[size];
    generateArray(arr, size);
    printArray(arr, size);
    printMaxMin(arr, size);
    speacialSort(arr, size);
    printArray(arr, size);
}

void generateArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = rand() % (40 - 20 + 1) + 20;
        arr[i] = temp;
    }
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void printMaxMin(const int arr[], int size)
{
    int max = -1e8, min = 1e8;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
    }
    cout << endl << "So chan lon nhat trong mang: " << max << endl;
    cout << "So chan nho nhat trong mang: " << min << endl;
}

void speacialSort(int arr[], int size)
{
    int countOdd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] % 2 != 0)
                    swap(arr[i], arr[j]);
            }
        }
        if (arr[i] & 1)
            ++countOdd;
    }
    sort(arr, 0, countOdd - 1);
    sort(arr, countOdd, size - 1);
}

void sort(int arr[], int start, int end)
{
    for (int i = start; i < end - 1; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
