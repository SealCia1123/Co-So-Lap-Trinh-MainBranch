#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap vao lan luot 3 so a, b, c: ";
    cin >> a >> b >> c;

    // Kiểm tra xem a == 0
    if (a == 0)
    {
        // kiểm tra b == 0
        if (b == 0)
        {
            // kiểm tra c == 0 -> phương trình có vô số nghiệm
            if (c == 0)
                cout << "Phuong trinh co vo so nghiem" << endl;
                // kiểm tra c != 0 -> phương trình vô nghiệm
            else
                cout << "Phuong trinh vo nghiem" << endl;
        }
        else
            // TH b != 0
        {
            double x = -c / b;
            cout << "Phuong trinh co nghiem la: " << x << endl;
        }
    }
    else
        // TH a != 0
    {
        double delta = b * b - (4 * a * c);
        if (delta > 0)
            //TH delta > 0 -> 2 nghiệm phân biệt x1, x2
        {
            double x1 = (-b + sqrt(delta)) / (2 * a),
                    x2 = (-b - sqrt(delta)) / (2 * a);

            cout << "Phuong trinh co 2 nghiem phan biet, x1 = " << x1 << ", x2 = " << x2 << endl;
        }
        else if (delta == 0)
            // TH delta == 0 -> nghiệm kép
        {
            double x = -b / 2 * a;
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << x << endl;
        }
        else
            // TH delta < 0 -> vô nghiệm
            cout << "Phuong trinh vo nghiem" << endl;
    }

    return 0;
}