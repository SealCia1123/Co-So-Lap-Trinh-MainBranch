// viết hàm tính diện tích và chu vi hình chữ nhật
#include <iostream>

using namespace std;

int rectangleArea(int length, int width);

int rectanglePerimeter(int length, int width);

int main()
{
    int length, width;
    do
    {
        cout << "Nhap vao chieu dai va chieu rong cua hinh chu nhat: ";
        cin >> length >> width;
        if (length <= 0 || width <= 0)
            cout << "Chieu dai va chieu rong khong hop le, nhap lai" << endl;
    } while (length <= 0 || width <= 0);

    cout << "Dien tich cua hinh chu nhat la: " << rectangleArea(length, width) << endl;
    cout << "Chu vi cua hinh chu nhat la: " << rectanglePerimeter(length, width) << endl;
    return 0;
}

int rectangleArea(int length, int width)
{
    return length * width;
}

int rectanglePerimeter(int length, int width)
{
    return (length + width) * 2;
}

