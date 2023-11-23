#include <stdio.h>

int main() {
    // Jumlah uang awal
    float jumlah_uang = 1000000.0;

    // Bunga per bulan (dalam persen)
    float bunga = 2.0;

    // Menghitung jumlah uang setelah 10 bulan
    for (int i = 1; i <= 10; i++) {
        // Menghitung bunga untuk bulan ini
        float bunga_bulanan = (bunga / 100) * jumlah_uang;

        // Menambahkan bunga ke jumlah uang
        jumlah_uang += bunga_bulanan;
    }

    // Menampilkan hasil
    printf("Jumlah uang setelah 10 bulan adalah Rp. %.2f\n", jumlah_uang);

    return 0;
}

