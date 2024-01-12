/*
 * Tao ra 1 mang ngau nhien n phan tu (1-99), chi lay phan tu so le
 * a. In ra mang
 * b. Dem so luong boi so cua 3
 * c. Tap hop cac boi so cua 3 vao ben trai cua mang thu tu giam dan, con lai xep vao ben phai thu tu tang dan
 */
#include <iostream>

using namespace std;

void generateArr(int arr[], int n, int min, int max);

void printArr(const int arr[], int n);

bool ktBoiSo3(int n);

int count(const int arr[], int n);

void mySwap(int &a, int &b);

void mySort(int arr[], int n);

void xepTangDan(int arr[], int start, int end);

void xepGiamDan(int arr[], int start, int end);

const int MAX_SIZE = 100;

int main()
{
    srand(time(0));
    int n, arr[MAX_SIZE];
    cout << "Nhap kich thuoc cua mang: ";
    cin >> n;
    generateArr(arr, n, 1, 99);
    // Cau a
    cout << "Mang: ";
    printArr(arr, n);

    // Cau b
    cout << "So luong boi so cua 3 trong mang: " << count(arr, n) << endl;

    // Cau c
    cout << "Mang ban dau: ";
    printArr(arr, n);
    cout << "Mang sau khi sap xep: ";
    mySort(arr, n);
    printArr(arr, n);
    return 0;
}

void generateArr(int arr[], int n, int min, int max)
{
    for (int i = 0; i < n; i++)
    {
        int temp = rand() % (max - min + 1) + min;
        if (temp % 2 == 0)
            i--;
        else
            arr[i] = temp;
    }
}

void printArr(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << endl;
    }
}

bool ktBoiSo3(int n)
{
    if (n % 3 == 0)
        return true;
    return false;
}

int count(const int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ktBoiSo3(arr[i]))
            count++;
    }
    return count;
}

void mySwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void mySort(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!ktBoiSo3(arr[i]))
        {
            for (int j = i + 1; j < n; j++)
            {
                if (ktBoiSo3(arr[j]))
                    mySwap(arr[i], arr[j]);
            }
        }
        if (ktBoiSo3(arr[i]))
            count++;
    }
    xepGiamDan(arr, 0, count);
    xepTangDan(arr, count, n);
}

void xepTangDan(int arr[], int start, int end)
{
    for (int i = start; i < end - 1; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (arr[i] > arr[j])
                mySwap(arr[i], arr[j]);
        }
    }
}

void xepGiamDan(int arr[], int start, int end)
{
    for (int i = start; i < end - 1; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (arr[i] < arr[j])
                mySwap(arr[i], arr[j]);
        }
    }
}