#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int count = 0;

    while (1) {
        printf("Masukkan karakter (atau '*' untuk keluar): ");
        scanf(" %c", &C);

        // Keluar dari loop jika input '*' (bintang)
        if (C == '*') {
            break;
        }

        // Cetak isi array
        printf("Isi array:\n");
        for (int i = 0; i < 10; i++) {
            printf("%2c", A[i]);
        }

        // Periksa apakah karakter ada dalam array
        count = 0; // reset count
        printf("\n");

        for (int i = 0; i < 10; i++) {
            if (A[i] == C) {
                count++;
            }
        }

        // Cetak hasil
        if (count > 0) {
            printf("ADA\n");
            printf("%d\n", count);
        } else {
            printf("TIDAK ADA\n");
        }

        printf("\n\n");
    }

    return 0;
}

