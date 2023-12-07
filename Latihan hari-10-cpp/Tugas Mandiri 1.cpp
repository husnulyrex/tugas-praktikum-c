#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C
    int cIndex = 0;
    for (int i = 0; i < 5; ++i) {
        if (A[i] > 10) {
            C[cIndex++] = A[i];
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C
    for (int i = 0; i < 7; ++i) {
        if (B[i] > 10) {
            C[cIndex++] = B[i];
        }
    }

    // Menampilkan isi array C untuk hasil a
    printf("a. Isi array C:\n");
    for (int i = 0; i < cIndex; ++i) {
        printf("%d ", C[i]);
    }

    // Membalikkan nilai-nilai di array C untuk hasil b
    for (int i = 0; i < cIndex / 2; ++i) {
        int temp = C[i];
        C[i] = C[cIndex - i - 1];
        C[cIndex - i - 1] = temp;
    }

    // Menampilkan isi array C untuk hasil b
    printf("\nb. Isi array C (dibalik):\n");
    for (int i = 0; i < cIndex; ++i) {
        printf("%d ", C[i]);
    }

    return 0;
}

