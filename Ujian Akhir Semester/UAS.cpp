#include <stdio.h>
#include <unistd.h>

// Array level kekeruhan air
int kekeruhan_air[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk mengatur kecepatan motor utama berdasarkan level kekeruhan air
int aturKecepatanMotor(int level) {
    // Implementasi logika sistem fuzzy disini
    // ...

    // Contoh implementasi sederhana
    int rpm;
    switch (level) {
        case 12:
            rpm = 800;
            break;
        case 18:
            rpm = 1000;
            break;
        // Tambahkan case sesuai kebutuhan
        // ...
        default:
            rpm = 1000; // Default kecepatan
    }

    return rpm;
}

// Fungsi untuk menjalankan motor pembuka klep selama waktu tertentu
void jalankanMotorPembukaKlep(int waktu) {
    printf("Motor pembuka klep berputar selama %d menit.\n", waktu);
    sleep(waktu * 60); // Konversi menit ke detik
}

// Fungsi untuk menjalankan siklus pencucian
void jalankanSiklusPencucian() {
    // Implementasi deteksi level kekeruhan air menggunakan sistem fuzzy
    // ...

    // Contoh: Ambil level kekeruhan air pertama dari array
    int levelKekeruhan = kekeruhan_air[0];
    printf("Level kekeruhan air: %d NTU\n", levelKekeruhan);

    // Motor listrik utama berputar sesuai level kekeruhan air
    int rpm = aturKecepatanMotor(levelKekeruhan);
    printf("Motor utama berputar dengan kecepatan %d rpm.\n", rpm);

    // Pada setiap pertengahan waktu
    sleep(30); // Jeda 30 detik

    // Motor listrik utama berhenti
    printf("Motor utama berhenti pada pertengahan waktu.\n");

    // Motor pembuka klep pembuangan air kotor aktif selama 2 menit
    jalankanMotorPembukaKlep(2);

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    rpm = 2000;
    printf("Motor utama berputar dengan kecepatan %d rpm untuk mengeringkan cucian selama 3 menit.\n", rpm);
    sleep(3 * 60); // Jeda 3 menit

    // Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    jalankanMotorPembukaKlep(2);

    // Motor listrik utama berputar selama sisa waktu mencuci
    printf("Motor utama berputar selama sisa waktu mencuci.\n");
    // Implementasi proses pencucian sisa waktu
    // ...

    // Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
    jalankanMotorPembukaKlep(2);

    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    rpm = 2000;
    printf("Motor utama berputar dengan kecepatan %d rpm untuk mengeringkan cucian selama 3 menit.\n", rpm);
    sleep(3 * 60); // Jeda 3 menit
}

int main() {
    printf("1. Tombol Start ditekan.\n");
    jalankanMotorPembukaKlep(2); // Motor pembuka klep pengisian air aktif selama 2 menit

    printf("2. Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air.\n");

    // Jalankan siklus pencucian
    jalankanSiklusPencucian();

    printf("Proses pencucian selesai.\n");

    return 0;
}

