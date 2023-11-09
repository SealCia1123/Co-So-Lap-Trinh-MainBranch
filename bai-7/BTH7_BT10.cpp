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

void sortThreeNumberAscend(int &a, int &b, int &c)
{

}

int main()
{
    int a = 2, b = 1;
    sortTwoNumberDescend(a, b);
    cout << a << " " << b;
    return 0;
}