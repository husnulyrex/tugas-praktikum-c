#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, ada;

    while (1) {
        // Input nilai integer
        printf("Masukkan bilangan integer (atau -1 untuk keluar): ");
        scanf("%i", &N);

        // Keluar dari loop jika input -1
        if (N == -1) {
            break;
        }

        // Cetak isi array
        printf("Isi array:\n");
        for (int i = 0; i < 11; i++) {
            printf("%3i", A[i]);
        }

        // Periksa apakah ada nilai dalam array yang sama dengan N
        ada = 0; // reset flag
        printf("\n");

        for (int i = 0; i < 11; i++) {
            if (A[i] == N) {
                if (ada == 0) {
                    printf("ADA\n");
                    printf("Lokasi bilangan yang sama: %d", i);
                    ada = 1; // set flag menjadi 1 karena N telah ditemukan
                } else {
                    printf(" %d", i); // jika N ditemukan lagi, hanya cetak indeksnya
                }
            }
        }

        // Jika N tidak ditemukan, cetak "TIDAK ADA"
        if (ada == 0) {
            printf("TIDAK ADA\n");
        }

        printf("\n\n");
    }

    return 0;
}

