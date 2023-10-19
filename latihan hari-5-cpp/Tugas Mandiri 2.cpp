#include <stdio.h>

int main() {
    int kode;
    char jenis;
    double harga, diskon;

    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis); // Perhatikan spasi sebelum %c untuk menghindari karakter newline
    printf("Masukkan harga: ");
    scanf("%lf", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis barang tidak valid.\n");
            return 1; // Keluar dari program dengan kode kesalahan
    }

    double hargaSetelahDiskon = harga - (harga * diskon);

    printf("Jenis barang %c mendapat diskon = %.0lf%%, Harga setelah didiskon = %.2lf\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0; // Program selesai tanpa kesalahan
}

