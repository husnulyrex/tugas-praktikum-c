#include <stdio.h>

int main() {
    // Deklarasi array satu dimensi dengan 11 elemen
    int A[11];

    // Data dari dokumen
    int data_dokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    // Menginput data ke dalam array A dan mencetak nilai genap
    int j = 0; // Indeks array A
    for (int i = 0; i < sizeof(data_dokumen) / sizeof(data_dokumen[0]); i++) {
        // Memeriksa apakah nilai genap
        if (data_dokumen[i] % 2 == 0) {
            // Menyimpan nilai genap ke dalam array A
            A[j] = data_dokumen[i];
            j++;

            // Mencetak nilai yang baru dimasukkan ke dalam array A
            printf("%d ", data_dokumen[i]);
        }
    }

    return 0;
}

