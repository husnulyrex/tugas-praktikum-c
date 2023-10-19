#include <iostream>

int main() {
    int jamMasuk, jamKeluar;

    // Input jam masuk
    std::cout << "Masukkan jam masuk: ";
    std::cin >> jamMasuk;

    // Input jam keluar
    std::cout << "Masukkan jam keluar: ";
    std::cin >> jamKeluar;

    // Validasi input jam
    if (jamMasuk < 1 || jamMasuk > 12 || jamKeluar < 1 || jamKeluar > 12) {
        std::cout << "Jam masuk dan jam keluar tidak valid. Masukkan angka antara 1-12." << std::endl;
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // Menghitung lama parkir
    int lamaParkir;
    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (12 - jamMasuk) + jamKeluar; // Menganggap jam keluar sebagai jam berikutnya
    }

    // Menghitung biaya parkir
    int biaya = 2000; // Biaya untuk 2 jam pertama
    if (lamaParkir > 2) {
        biaya += (lamaParkir - 2) * 500;
    }

    // Menampilkan lama parkir dan biaya
    std::cout << "Lama parkir: " << lamaParkir << " jam" << std::endl;
    std::cout << "Biaya = " << biaya << std::endl;

    return 0; // Program selesai tanpa kesalahan
}

