#include <stdio.h>

int main() {
    int X[4] = {12, 2, 7, 10};
    int Y[6] = {15, 4, 16, 20, 25, 30};
    int Z[10];

    // Menggabungkan nilai yang lebih kecil dari 10 dari array X
    int zIndex = 0;
    for (int i = 0; i < 4; ++i) {
        if (X[i] < 10) {
            Z[zIndex++] = X[i];
        }
    }

    // Menggabungkan nilai yang ada di lokasi ganjil dari array Y
    for (int i = 1; i < 6; i += 2) {
        Z[zIndex++] = Y[i];
    }

    // Menampilkan isi array Z
    printf("Isi array Z:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", Z[i]);
    }

    return 0;
}

