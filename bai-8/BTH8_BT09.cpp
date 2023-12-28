#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void inputArr(int arr[], int size);

void printArr(const int arr[], int size);

double expression(const int arr[], int size, int x);

const int MAXSIZE = 100;

int main()
{
    int n, arr[MAXSIZE], x;
    cout << "Nhap phan tu cua mang: ";
    cin >> n;
    inputArr(arr, n);
    printArr(arr, n);
    cout << "Nhap vao so mu: ";
    cin >> x;
    cout << "Gia tri da thuc: " << fixed << setprecision(0) << expression(arr, n, x);
    return 0;
}

void inputArr(int arr[], int size)
{
    cout << "Nhap phan tu vao mang: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}

void printArr(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << endl;
    }
}

double expression(const int arr[], int size, int x)
{
    double result = 0;
    for (int i = 0; i < size; i++)
        result += (double) arr[i] * pow(x, i);
    return result;
}
