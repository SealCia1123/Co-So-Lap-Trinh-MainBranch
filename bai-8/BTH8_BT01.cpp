/*
a) Khai báo một mảng alpha lưu 50 phần tử kiểu double.
b) Gán giá trị của 25 phần tử đầu tiên là bình phương của chỉ số phần tử, 25 phần
tử còn lại có giá trị là lập phương của chỉ số.
c) In các giá trị trong mảng alpha ra màn hình, mỗi dòng gồm 10 phần tử.
 */
#include <iostream>

using namespace std;

int main()
{
    double alpha[50];
    for (int i = 0, j = 25; j < 50; j++, i++)
    {
        alpha[i] = i * i;
        alpha[j] = j * j * j;
    }
    for (int i = 0; i < 50; i++)
    {
        if (i == 10 || i == 20 || i == 30 || i == 40)
            cout << "\n";
        cout << alpha[i] << " ";
    }
    return 0;
}