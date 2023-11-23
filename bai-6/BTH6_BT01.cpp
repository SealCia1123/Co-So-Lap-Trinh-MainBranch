// viết hàm tính diện tích và chu vi hình chữ nhật
#include <iostream>

using namespace std;

int rectangleArea(int length, int width);

int rectanglePerimeter(int length, int witdh);

int main()
{
    int length, width;
    cout << "Nhap vao chieu dai va chieu rong cua hinh chu nhat: ";
    cin >> length >> width;
    cout << "Dien tich cua hinh chu nhat la: " << rectangleArea(length, width) << endl;
    cout << "Chu vi cua hinh chu nhat la: " << rectanglePerimeter(length, width) << endl;

    return 0;
}

int rectangleArea(int length, int width)
{
    return length * width;
}

int rectanglePerimeter(int length, int witdh)
{
    return (length + witdh) * 2;
}

