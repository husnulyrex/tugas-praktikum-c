#include <stdio.h>
#include <string.h>

int main() {
    char A[9];  // Increase the size by 1 to allow for the null terminator '\0'
    int adaSama = 0;

    // Menginput isi array A
    printf("Masukkan isi array A (huruf kapital tanpa spasi, maksimal 8 karakter): ");
    if (scanf("%8s", A) != 1) {
        printf("Input tidak valid.\n");
        return 1;  // Exit the program with an error code
    }

    // Validate input length
    if (strlen(A) != 8) {
        printf("Panjang input harus 8 karakter.\n");
        return 1;  // Exit the program with an error code
    }

    // Periksa apakah ada huruf yang sama di dalam array A
    for (int i = 0; i < 7; i++) {  // Iterasi hingga elemen ke-7 karena elemen ke-8 adalah null terminator '\0'
        for (int j = i + 1; j < 8; j++) {
            if (A[i] == A[j]) {
                adaSama = 1;
                printf("ADA: Huruf yang sama adalah %c\n", A[i]);
                break;
            }
        }
        if (adaSama) {
            break;
        }
    }

    if (!adaSama) {
        printf("TIDAK ADA\n");
    }

    return 0;
}

