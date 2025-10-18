#include <iostream>
using namespace std;

int main() {
    int totalBelanja, hargaBayar;
    string PesanBuatCustomer ;

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
        PesanBuatCustomer = "Kurang dari 100 ribu, sayang sekali tidak dapat diskon"; 
    } 
    else if (totalBelanja >= 100001 && totalBelanja <= 249999) {
        hargaBayar = totalBelanja * 98 / 100;
        PesanBuatCustomer = "Dapat diskon 2% Lumayan dapat diskon";
    } 
    else if (totalBelanja >= 250000 && totalBelanja <= 499999) {
        hargaBayar = totalBelanja * 95 / 100;
        PesanBuatCustomer = "Dapat diskon 5% Mantap jiwa";
    } 
    else {
        hargaBayar = totalBelanja * 70 / 100;
        PesanBuatCustomer = "Dapat diskon 30% Wih, gila diskonnya";
    }

    cout << "\n==============================" << endl;
    cout << "Total belanja kamu : Rp" << totalBelanja << endl;
    cout << "Yang harus dibayar : Rp" << hargaBayar << endl;
    cout << "Pesan: " << PesanBuatCustomer << endl;
    cout << "==============================" << endl;


    return 0;
}