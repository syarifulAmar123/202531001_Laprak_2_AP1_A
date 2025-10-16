#include <iostream>
using namespace std;

int main() {
    int totalBelanja, hargaBayar;

    cout << "Masukkan total harga belanja: ";
    cin >> totalBelanja;

    if (totalBelanja == 0) {
        cout << "Belanja dulu dong, baru minta diskon!" << endl;
        cout << "Tidak usah bayar!\n";
        return 0; // berhenti di sini kalau totalBelanja = 0
    } 
    else if (totalBelanja <= 100000) {
        cout << "Kurang dari 100000\n";
        hargaBayar = totalBelanja;
    } 
    else if (totalBelanja >= 100001 && totalBelanja <= 249999) {
        hargaBayar = totalBelanja * 98 / 100;
    } 
    else if (totalBelanja >= 250000 && totalBelanja <= 499999) {
        hargaBayar = totalBelanja * 95 / 100;
    } 
    else {
        hargaBayar = totalBelanja * 70 / 100;
    }

    cout << "Yang dibayar adalah: " << hargaBayar << endl;
    cout << "Total belanja kamu adalah: " << totalBelanja << endl;

    return 0;
}