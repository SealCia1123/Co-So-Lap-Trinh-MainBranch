#include <iostream>
#include <cmath>

using namespace std;

void inputArr(int arr[], int size);

double expression(const int arr[], int size, int x);

int main()
{

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
        if (i == size - 1)
            cout << endl;
        else
            cout << arr[i];
    }
}

double expression(const int arr[], int size, int x)
{
    double result = 0;
    for (int i = size; i >= 0; i--)
        result += (double) arr[i] * pow(x, i);
    return result;
}
