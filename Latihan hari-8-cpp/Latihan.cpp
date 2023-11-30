#include <stdio.h>

int main() {
    // Deklarasi array satu dimensi dengan 11 elemen
    int A[11];

    // Data dari dokumen dengan End Of Data (EOD) 999
    int data_dokumen[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};

    // Menginput data ke dalam array A
    int i = 0;
    while (data_dokumen[i] != 999) {
        A[i] = data_dokumen[i];
        i++;
    }

    // a. Mencetak isi array A sesuai urutan input
    printf("a. A: ");
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    // b. Mencetak isi array A dalam urutan terbalik
    printf("\nb. A: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", A[j]);
    }

    return 0;
}

