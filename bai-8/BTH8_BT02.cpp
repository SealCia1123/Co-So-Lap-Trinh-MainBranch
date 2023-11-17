#include <iostream>

#define MAXSIZE 100

using namespace std;

int main()
{
    double values[MAXSIZE];
    int currentSize;
    cout << "Nhap vao so luong phan tu trong mang: ";
    cin >> currentSize;
    cout << "Nhap vao gia tri cua mang: ";

    for (int i = 0; i < currentSize; i++)
    {
        int temp;
        cin >> temp;
        values[i] = temp;
    }
   
    for (int i = 0; i < currentSize; i++)
    {
        if (i == currentSize - 1)
            cout << values[i] << endl;
        else
            cout << values[i] << ", ";
    }
    return 0;
}
