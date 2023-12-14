#include <stdio.h>
#include <string.h>

int main() {
    char A[11];
    int count[26] = {0}; // Array untuk menghitung jumlah setiap huruf
    int adaSama = 0;

    // Menginput isi array A
    printf("Masukkan isi array A (huruf kapital tanpa spasi, 10 karakter): ");
    if (scanf("%10s", A) != 1) {
        printf("Input tidak valid.\n");
        return 1;  // Exit the program with an error code
    }

    // Menghitung jumlah setiap huruf dalam array A
    for (int i = 0; i < strlen(A); i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
        }
    }

    // Mengecek apakah ada huruf yang sama
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            adaSama = 1;
            break;
        }
    }

    // Menampilkan hasil
    if (adaSama) {
        printf("ADA: Terdapat huruf yang sama dalam array A.\n");
    } else {
        printf("TIDAK ADA: Tidak terdapat huruf yang sama dalam array A.\n");
    }

    return 0;
}

