#include <iostream>
using namespace std;

int main() {
    int jam;
    int total_motor = 0;
    int total_jam = 0;
    int total_bayar = 0;

    cout << "Input lama parkir (jam). Ketik 0 untuk selesai." << endl;

    do {
        // 1. Minta Input
        cout << "Jam parkir: ";
        cin >> jam;

        // 2. Cek apakah user mau berhenti?
        if (jam == 0) {
            break; // Keluar dari loop jika input 0
        }

        // 3. Update data statistik umum
        total_motor++;      // Tambah 1 ke jumlah motor
        total_jam += jam;   // Tambahkan jam ke total jam

        // 4. Hitung biaya per motor
        int biaya_motor_ini = 0;
        if (jam <= 2) {
            // Jika parkir 2 jam atau kurang, tarif flat 2000/jam
            biaya_motor_ini = jam * 2000;
        } else {
            // Jika lebih dari 2 jam
            // 2 jam pertama harganya 4000 (2 * 2000)
            // Sisa jamnya dikali 1000
            biaya_motor_ini = 4000 + ((jam - 2) * 1000);
        }

        // 5. Masukkan biaya motor ini ke kantong total pendapatan
        total_bayar += biaya_motor_ini;

    } while (true); // Kondisi selalu true, penghentian dengan break

    // 6. Tampilkan Output Akhir
    cout << "\nJumlah motor: " << total_motor << endl;
    cout << "Total jam: " << total_jam << endl;
    cout << "Total bayar: " << total_bayar << endl;

    return 0;
}