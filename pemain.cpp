#include <iostream>
using namespace std;

int main() {
    int skor;

    cout << "Masukkan skor kamu: ";
    cin >> skor;

    cout << endl << "==============================" << endl;

    if (skor < 50) {
        cout << "Kamu mendapat Peti Perunggu." << endl;
    }  else if (skor >= 50 && skor <= 99) {
        cout << "Kamu mendapat Peti Perak." << endl;
    } else if (skor >= 100 && skor <= 199) {
        cout << "Kamu mendapat Peti Emas." << endl;
    } else {
        cout << "BOUYAHHH SODARAAAA! Kamu mendapatkan Peti Mitos!" << endl;
    } 

    cout << "==============================" << endl;
    cout << "Gas lagi kita !" << endl;

    return 0;
}