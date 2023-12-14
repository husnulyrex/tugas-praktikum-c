#include <stdio.h>

int main() {
    int NILAI[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int LULUS[12], GAGAL[12];
    int jumlahLulus = 0, jumlahGagal = 0;

    // Memindahkan nilai ke array LULUS dan GAGAL
    for (int i = 0; i < 12; i++) {
        if (NILAI[i] >= 60) {
            LULUS[jumlahLulus] = NILAI[i];
            jumlahLulus++;
        } else {
            GAGAL[jumlahGagal] = NILAI[i];
            jumlahGagal++;
        }
    }

    // Menampilkan isi array LULUS
    printf("Array LULUS: ");
    for (int i = 0; i < jumlahLulus; i++) {
        printf("%d ", LULUS[i]);
    }
    printf("\nJumlah mahasiswa LULUS: %d\n", jumlahLulus);

    // Menampilkan isi array GAGAL
    printf("Array GAGAL: ");
    for (int i = 0; i < jumlahGagal; i++) {
        printf("%d ", GAGAL[i]);
    }
    printf("\nJumlah mahasiswa GAGAL: %d\n", jumlahGagal);

    return 0;
}

