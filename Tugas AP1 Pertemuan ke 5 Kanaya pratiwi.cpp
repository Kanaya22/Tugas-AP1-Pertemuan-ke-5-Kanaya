#include <iostream>
#include <cmath> // untuk sqrt() dan pow()
using namespace std;

int main() {
    // Deklarasi semua variabel
    cout << "\n===== MENU PERHITUNGAN MATEMATIKA 1 =====" << endl;
    double c, A, B;
    double hasil1;

    // Input untuk rumus 1
    cout << "Masukkan nilai c: ";
    cin >> c;
    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    // Validasi nilai c
    if (c == 0) {
        cout << "Error: c tidak boleh 0 (karena pembagian dengan nol)." << endl;
        return 1;
    }

    // Hitung hasil pertama: -2 / c + A + B
    hasil1 = -2 / c + A + B;

    // Input untuk rumus 2
    double x, y;
    double  hasil2;
    cout << "\n===== MENU PERHITUNGAN MATEMATIKA 2 =====" << endl;
    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    // Validasi nilai y dan x
    if (y == 0) {
        cout << "Error: y tidak boleh 0 (karena pembagian dengan nol)." << endl;
        return 1;
    }

    if (x < 0) {
        cout << "Error: x tidak boleh negatif (akar dari bilangan negatif tidak valid)." << endl;
        return 1;
    }

    // Hitung hasil kedua: sqrt(x) / y + x^2
    hasil2 = sqrt(x) / y + pow(x, 2);

    // Tampilkan hasil
    cout << "\nHasil dari -2 / c + A + B adalah: " << hasil1 << endl;
    cout << "Hasil dari akar x / y + x pangkat 2 adalah: " << hasil2 << endl;

    return 0;
}
