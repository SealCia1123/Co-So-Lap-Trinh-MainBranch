#include <bits/stdc++.h>

// Kiem tra HDH neu la Linux -> CLEAR = "cls", Windows -> CLEAR = "clear"
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

using namespace std;

// Khai bao so tien mac dinh, so tien cua nguoi choi, so tien cuoc
const int startMoney = 1000;

int playerMoney = startMoney;

int betMoney;

void showMenu();

void showRule();

void playGame();

void calMoney(bool winningState);

int main()
{
    while (true)
    {
        // Hien menu va cho nguoi dung nhap lua chon
        showMenu();
        char choice;
        cin >> choice;
        cout << "\n";

        switch (choice)
        {
            // Bat dau tro choi
            case '1':
                // Kiem tra so tien hien tai cua nguoi choi, neu <= 0 thi ket thuc chuong trinh
                if (playerMoney <= 0)
                {
                    cout << "Rat tiec, ban da het tien\n";
                    return 0;
                }
                playGame();
                break;

            case '2':
                // Hien luat choi
                showRule();
                break;

            case '0':
                cout << "Thoat chuong trinh\n";
                return 0;

            default:
                cout << "Lua chon nhap vao khong hop le\n";
        }


        char isContinue;
        cout << "Ban co muon tiep tuc choi? (Nhap 'n' de dung): ";
        cin >> isContinue;
        if (isContinue == 'n' || isContinue == 'N')
        {
            cout << "Thoat chuong trinh\n";
            return 0;
        }
        system(CLEAR);
    }
}


void showMenu()
{
    cout << "=====================================================================================================\n";
    cout << "TRO CHOI DOAN SO (TAI XIU)\n";
    cout << "1. Bat dau choi\n";
    cout << "2. Xem luat choi\n";
    cout << "0. Thoat chuong trinh\n";
    cout << "=====================================================================================================\n";
    cout << "Nhap vao lua chon (1, 2, 0): ";
}

void showRule()
{
    system(CLEAR);
    cout << "=====================================================================================================\n";
    cout << "LUAT CHOI\n";
    cout << "=====================================================================================================\n";
    cout << "Co 3 con xuc xac, moi xuc xac co cac so tu 1 - 6\n";
    cout << "Trong moi lan quay:\n";
    cout << "    Tong diem cua cac xuc xac tu 4 - 10 thi XIU thang\n";
    cout << "    Tong diem cua cac xuc xac tu 11 - 18 thi TAI thang\n";
    cout << "    Dac biet neu ba xuc xac ra cung mot so thi nguoi choi thua\n\n";

    cout << "Moi nguoi choi se khoi dau voi 1000VND\n";
    cout << "Neu thang se nhan ve khoan tien bang voi tien cuoc\n";
    cout << "Neu thua se mat khoan tien da cuoc\n\n";
}

void playGame()
{
    system(CLEAR);
    // Khai bao lua chon, trang thai thang cua nguoi choi
    char choice;
    bool winningState = false;

    // Khai bao 3 con xuc xac
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dice1(1, 6);
    uniform_int_distribution<> dice2(1, 6);
    uniform_int_distribution<> dice3(1, 6);
    int DICE1 = dice1(gen);
    int DICE2 = dice3(gen);
    int DICE3 = dice3(gen);
    int totalNumber = DICE1 + DICE2 + DICE3;

    cout << "=====================================================================================================\n";
    cout << "BAT DAU CHOI\n";
    cout << "Ban dang co " << playerMoney << " VND\n";
    cout << "Doan Tai ('T') hay Xiu ('X'): ";
    cin >> choice;

    // Kiem tra lua chon co hop le
    if (choice != 'T' && choice != 't' && choice != 'X' && choice != 'x')
    {
        cout << "Lua chon khong hop le\n";
        return;
    }

    // Dat cuoc so tien cua nguoi choi
    cout << "So tien dat cuoc: ";
    cin >> betMoney;
    // Kiem tra phai tien cuoc <= tien hien tai cua nguoi choi
    if (betMoney > playerMoney)
    {
        cout << "So tien cuoc phai it hon hoac bang so tien cua ban\n";
        return;
    }

    // In ra kq 3 con xuc xac
    cout << "Ket qua: " << DICE1 << "\t" << DICE2 << "\t" << DICE3 << "\n";
    cout << "Tong diem xuc xac: " << totalNumber << "\n";

    // KT TH 3 xuc sac cung so
    if (DICE1 == DICE2 && DICE2 == DICE3)
    {
        cout << "3 xuc sac ra cung so\n";
        calMoney(winningState);
        return;
    }

    // Neu chon TAI
    if (choice == 'T' || choice == 't')
    {
        if (totalNumber >= 11)
            winningState = true;
    }

        // Neu chon XIU
    else
    {
        if (totalNumber <= 10)
            winningState = true;
    }

    // Tinh so tien dua vao thang, thua
    calMoney(winningState);
}

void calMoney(bool winningState)
{
    // Kiem tra trang thai thang cua nguoi choi, neu thang + tien, thua - tien
    if (winningState)
    {
        playerMoney += betMoney;
        cout << "Chuc mung, ban da thang\n";
        cout << "So tien cua ban la: " << playerMoney << "\n";
    }
    else
    {
        playerMoney -= betMoney;
        cout << "Rat tiec, ban da thua\n";
        cout << "So tien con lai cua ban la: " << playerMoney << "\n";
    }
}