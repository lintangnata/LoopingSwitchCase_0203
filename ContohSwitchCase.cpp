#include <iostream>
using namespace std;

double hitungIpk(double total, int sks)
{
    return total / sks;
}

string predikat (double ipk){
    if (ipk < 10){
        return "Memuaskan";
    }
    else{
        return "Cumlaude";
    }
}


int main()
{
    char pilihan;
    int sks;
    double total;

    do 
    {
        cout << "Pilihan Menu" << endl;
        cout << "1. Cek nilai IPK" << endl;
        cout << "2. Cek Predikat Kelulusan" << endl;
        cout << "3. Keluar";

        cout << "Masukan pilihan (1/2/3) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case '1':
            int sks;
            double total;
            cout << "Masukkan total nilai = ";
            cin >> total;
            cout << "Masukkan total sks = ";
            cin >> sks;

            cout << "Nilai Ipk = " << hitungIpk(total, sks) << endl;
            break;
        case '2':
            cout << "Predikat anda adalah" << predikat(hitungIpk(total, sks)) << endl;
            break;
        case '3':
            break;

        default:
        cout << "Pilihan anda salah" << endl;
            break;
        }
    }while (pilihan != 3);
    
}