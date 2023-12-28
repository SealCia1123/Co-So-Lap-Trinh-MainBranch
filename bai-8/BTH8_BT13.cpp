#include <iostream>

using namespace std;

void generateRandomArr(int arr[], int n, int min, int max);

void printArr(const int arr[], int n);

void statistic(const int arr[], int n);

const int MAXSIZE = 100;

int main()
{
    srand(time(0));
    int n;
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> n;
    gener
    return 0;
}

void generateRandomArr(int arr[], int n, int min, int max)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % (max - min + 1) + min;
}

void printArr(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void statistic(const int arr[], int n)
{
    int countArr[MAXSIZE] = {0};
    for (int i = 0; i < n; i++)
        countArr[arr[i]]++;
    for (int i = 0; i < MAXSIZE; i++)
    {
        if (countArr[i])
            cout << "So " << i << " xuat hien " << countArr[i] << " lan\n";
    }
}
