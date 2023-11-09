#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sortTwoNumberAscend(int &a, int &b)
{
    if (a > b)
        swap(a, b);
}

int main()
{
    int a = 2, b = 1;
    sortTwoNumber(a, b);
    cout << a << " " << b;
    return 0;
}