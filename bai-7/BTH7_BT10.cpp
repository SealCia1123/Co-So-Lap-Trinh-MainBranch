#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortTwoNumberDescend(int &a, int &b)
{
    if (a > b)
        swap(a, b);
}

int main()
{
    int a = 2, b = 1;
    sortTwoNumberAscend(a, b);
    cout << a << " " << b;
    return 0;
}