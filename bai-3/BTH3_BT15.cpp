#include <iostream>
#include <string>

using namespace std;

int main()
{
    double a, b, c;
    bool isTriagle = false;
    string triagleType;
    cout << "Nhap vao 3 canh cua tam giac: ";
    cin >> a >> b >> c;

    // kiểm tra tam giác có hợp lệ: tổng 2 cạnh của tam giác luôn lớn hơn cạnh còn lại
    if (a + b > c || a + c > b || b + c > a)
    {
        isTriagle = true;
        // Kiểm tra tam giác đều a = b = c
        if (a == b && b == c)
            triagleType = "tam giac deu";

            // Kiểm tra tam giác vuông a2 + b2 = c2
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            // Kiểm tra TH tam giác vuông cân
            if ((a == b || b == c || a == c))
                triagleType = "tam giac vuong can";
            else
                triagleType = "tam giac vuong";
        }

        else if (a == b || b == c || a == c)
            // Kiểm tra tam giác cân
            triagleType = "tam giac can";

        else
            triagleType = "tam giac thuong";
    }

    if (isTriagle)
        cout << "Tam giac thuoc loai " << triagleType << endl;
    else
        cout << "Tam giac khong hop le" << endl;

    return 0;
}