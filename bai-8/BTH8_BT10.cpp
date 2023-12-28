#include <iostream>

using namespace std;

const int MAXSIZE = 100;

void Eratos(int n);

int main()
{
    int n;
    cout << "Nhap so luong muon kiem tra: ";
    cin >> n;
    Eratos(n);
    return 0;
}

void Eratos(int n)
{
    if (n >= MAXSIZE)
        return;
    bool arrPrime[MAXSIZE] = {0};
    for (int i = 2; i * i <= n; i++)
    {
        if (!arrPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                arrPrime[j] = 1;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (!arrPrime[i])
            cout << i << " ";
    }
    cout << endl;
}
