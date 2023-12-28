/*
 * Viết hàm trả về vị trí xuất hiện đầu tiên của phần tử nhỏ nhất trong mảng. Hàm
nhận vào mảng số nguyên và số phần tử của mảng. Viết chương trình kiểm tra
hàm
 */
#include <iostream>

using namespace std;

int minIndex(const int arr[], int size);

void generateRandomArr(int arr[], int size, int min, int max);

void printArr(const int arr[], int size);

const int MAXSIZE = 100;

int main()
{
    int arrSize, arr[MAXSIZE];
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> arrSize;
    generateRandomArr(arr, arrSize, 0, 50);
    printArr(arr, arrSize);
    cout << "Index cua phan tu co gia tri nho nhat trong mang la: " << minIndex(arr, arrSize) << endl;
    return 0;
}

int minIndex(const int arr[], int size)
{
    int min = arr[0], minIndex = 0;
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

void generateRandomArr(int arr[], int size, int min, int max)
{
    for (int i = 0; i < size; i++)
        arr[i] = rand() % (max - min + 1) + min;
}

void printArr(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}