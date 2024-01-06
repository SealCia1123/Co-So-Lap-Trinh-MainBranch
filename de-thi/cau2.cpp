// Viết chương trình cho phép tạo ngẫu nhiên một mảng số nguyên n phần tử (n được nhập
//từ bàn phím), các số trong mảng chỉ chứa các giá trị từ 20 – 40. (1 điểm)
//a) In các giá trị trong mảng ra màn hình, mỗi phần tử cách nhau một khoảng trắng (1 điểm)
//b) In ra màn hình số chẵn lớn nhất, nhỏ nhất trong mảng. (1,5 điểm)
//c) Sắp xếp mảng theo thứ tự: các số lẻ nằm bên trái, các số chẵn nằm bên phải, dãy các số lẻ
//và các số chẵn đều có thứ tự tăng dần (lưu ý: không dùng mảng phụ). In mảng kết quả ra
//màn hình. (1,5 điểm)
#include <iostream>
#include <random>

using namespace std;

void generateArray(int arr[], int size);

void printArray(const int arr[], int size);

void printMaxMin(const int arr[], int size);

void speacialSort(int arr[], int size);

void sort(int arr[], int start, int end);

void swap(int &a, int &b);

int main()
{
    srand(time(0));
    int size;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> size;
    int arr[size];

    // Cau a
    generateArray(arr, size);
    cout << "Mang: ";
    printArray(arr, size);

    //Cau b
    printMaxMin(arr, size);

    // Cau c
    cout << "Mang truoc khi sap xep: ";
    printArray(arr, size);
    speacialSort(arr, size);
    cout << "\nMang sau khi sap xep: ";
    printArray(arr, size);
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void generateArray(int arr[], int size)
{
    const int MAX = 40, MIN = 20;
    for (int i = 0; i < size; i++)
    {
        int temp = rand() % (MAX - MIN + 1) + MIN;
        arr[i] = temp;
    }
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void printMaxMin(const int arr[], int size)
{
    int max = -1e8, min = 1e8;
    // Duyet qua mang
    for (int i = 0; i < size; i++)
    {
        // Neu phan tu do la so chan
        if (arr[i] % 2 == 0)
        {
            // Kiem tra voi max, min hien tai
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
    }
    cout << "\nSo chan lon nhat trong mang: " << max << '\n';
    cout << "So chan nho nhat trong mang: " << min << '\n';
}

void speacialSort(int arr[], int size)
{
    int countOdd = 0;
    for (int i = 0; i < size; i++)
    {
        // Duyet qua mang, neu gap phai so chan thi swap voi so le
        // Sau vong lap thi duoc mang toan so le ben trai va so chan ben phai
        if (arr[i] % 2 == 0)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] % 2 == 1)
                    swap(arr[i], arr[j]);
            }
        }
        // Dem co bao nhieu so le
        if (arr[i] % 2 == 1)
            ++countOdd;
    }
    sort(arr, 0, countOdd);
    sort(arr, countOdd, size);
}

void sort(int arr[], int start, int end)
{
    // Sort tu index start den index end - 1
    for (int i = start; i < end - 1; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

