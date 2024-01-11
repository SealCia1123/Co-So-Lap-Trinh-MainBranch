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

const int MAX_SIZE = 100;

int main()
{
    srand(time(0));
    int n, arr[MAX_SIZE];
    cout << "Nhap kich thuoc cua mang: ";
    cin >> n;
    generateArr(arr, n, 1, 99);
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
}
