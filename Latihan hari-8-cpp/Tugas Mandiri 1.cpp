#include <stdio.h>

int main() {
    int A[11]; // Array yang akan diisi
    int data, i = 0;

    printf("a. A:\n");
    // Input data sebanyak yang diminta
    while (1) {
        scanf("%d", &data);

        // Cek apakah data adalah 999 (End Of Data)
        if (data == 999 || i >= 11) {
            break;
        }

        // a. A: Disimpan hanya bila data lebih besar dari 9
        if (data > 9) {
            A[i] = data;
            i++;
        }
    }

    // Cetak array A
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    i = 0; // Reset index array

    printf("\nb. A:\n");
    // Input data sebanyak yang diminta
    while (1) {
        scanf("%d", &data);

        // Cek apakah data adalah 999 (End Of Data)
        if (data == 999 || i >= 11) {
            break;
        }

        // b. A: Disimpan hanya bila data lebih besar dari 9
        if (data > 9) {
            A[i] = data;
            i++;
        }
    }

    // Cetak array A
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    i = 0; // Reset index array

    printf("\nc. A:\n");
    // Input data sebanyak yang diminta
    while (1) {
        scanf("%d", &data);

        // Cek apakah data adalah 999 (End Of Data)
        if (data == 999 || i >= 11) {
            break;
        }

        // c. A: Disimpan berderetan dalam array, hanya bila data lebih besar dari 9
        if (data > 9) {
            A[i] = data;
            i++;
        }
    }

    // Cetak array A
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    i = 0; // Reset index array

    printf("\nd. A:\n");
    // Input data sebanyak yang diminta
    while (1) {
        scanf("%d", &data);

        // Cek apakah data adalah 999 (End Of Data)
        if (data == 999 || i >= 11) {
            break;
        }

        // d. A: Disimpan hanya nilai yang diinput bernilai ganjil
        if (data % 2 != 0) {
            A[i] = data;
            i++;
        }
    }

    // Cetak array A
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    i = 0; // Reset index array

    printf("\ne. A:\n");
    // Input data sebanyak yang diminta
    while (1) {
        scanf("%d", &data);

        // Cek apakah data adalah 999 (End Of Data)
        if (data == 999 || i >= 11) {
            break;
        }

        // e. A: Disimpan hanya bila data lebih besar dari 9
        if (data % 2 != 0) {
            A[i] = data;
            i++;
        }
    }

    // Cetak array A
    for (int j = 0; j < i; j++) {
        printf("%d ", A[j]);
    }

    return 0;
}

