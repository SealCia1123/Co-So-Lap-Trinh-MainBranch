#include <iostream>

using namespace std;

int main()
{
    // Viết chương trình giải và biện luận phương trình bậc 1: ax + b = 0
    double a, b;
    cout << "Nhap vao lan luot so a va b: ";
    cin >> a >> b;
    // Kiểm tra a có = 0 hay không
    if (a == 0)
    {
        // Kiểm tra b có bằng 0 hay không, nếu = 0 -> vô số nghiệm, nếu != 0 -> vô nghiêm
        if (b == 0)
            cout << "Phuong trinh co vo so nghiem" << endl;
        else
            cout << "Phuong trinh vo nghiem" << endl;
    }
    else // a != 0
        // Nếu a != 0 thì nghiệm x = - b / a
    {
        double x = (double) -b / a;
        cout << "Nghiem cua phuong trinh la: " << x << endl;
    }
    return 0;
}