#include <iostream>

using namespace std;

int main()
{
    double alpha[50];
    for (int i = 0; i < 25; i++)
    {
        // Từ index 0 -> 24, giá trị alpha[i]= index ** 2
        alpha[i] = i * i;
    }
    for (int i = 25; i < 50; i++)
    {
        // Từ index 25 -> 49, giá trị alpha[i]= index ** 3
        alpha[i] = i * i * i;
    }

    for (int i = 0; i < 50; i++)
    {
        // Kiểm tra nếu i rơi vào TH thứ 10, 20, 30, 40 thì xuống dòng
        if (i == 10 || i == 20 || i == 30 || i == 40)
        {
            cout << endl;
        }
        cout << alpha[i] << " ";
    }
    return 0;
}