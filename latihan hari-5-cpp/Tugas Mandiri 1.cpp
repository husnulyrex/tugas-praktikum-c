#include <iostream>

int main() {
    int jamMasuk, jamPulang;

    // Input jam masuk
    std::cout << "Masukkan jam masuk (1-12): ";
    std::cin >> jamMasuk;

    // Validasi input jam masuk
    if (jamMasuk < 1 || jamMasuk > 12) {
        std::cout << "Jam masuk tidak valid. Masukkan angka antara 1-12." << std::endl;
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // Input jam pulang
    std::cout << "Masukkan jam pulang (1-12): ";
    std::cin >> jamPulang;

    // Validasi input jam pulang
    if (jamPulang < 1 || jamPulang > 12) {
        std::cout << "Jam pulang tidak valid. Masukkan angka antara 1-12." << std::endl;
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // Menghitung lama bekerja
    int lamaBekerja;
    if (jamPulang >= jamMasuk) {
        lamaBekerja = jamPulang - jamMasuk;
    } else {
        lamaBekerja = (jamPulang + 12) - jamMasuk;
    }

    // Menampilkan lama bekerja
    std::cout << "Lama bekerja " << lamaBekerja << " jam" << std::endl;

    return 0; // Program selesai tanpa kesalahan
}

