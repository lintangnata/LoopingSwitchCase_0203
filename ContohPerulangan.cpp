#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int perulanganwhile = 0;
    int perulanganDo = 0;

    // Perulangan dengan for

    cout << "Perulangan for pencacahan naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "Perulangan for pecahan turun" << endl;
    // Perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << endl;
    cout << endl;

    cout << "Perulangan while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;

    while (n < 7)
    {
        cout << "Nilai n = " << n << endl;
        n = rand() % 10;
        perulanganwhile++;
    }
    cout << "Jumlah perulangan = " << perulanganwhile << endl;
    cout << "Nilai n terkhir = " << n << endl;

    cout << "Perulangan do while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;

    do
    {
        cout << "Nilai n = " << n << endl;
        n = rand() % 10;
        perulanganDo++;
    } while (n < 7);
    cout << "Jumlah perulangan = " << perulanganwhile << endl;
    cout << "Nilai n terakhir = " << n << endl;
    
}