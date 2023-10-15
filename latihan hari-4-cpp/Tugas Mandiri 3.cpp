#include <stdio.h>

int main() {
    int n;

    // Tahap 1: Start
    printf("Masukkan sebuah bilangan: ");

    // Tahap 2: scanf
    scanf("%d", &n);

    // Tahap 3: n > 50
    if (n > 50) {
        // Tahap 4: n = n - 25
        n = n - 25;
    } else {
        // Tahap 5: n = n + 10
        n = n + 10;
    }

    // Tahap 6: printf
    printf("Nilai n setelah perubahan: %d\n", n);

    // Tahap 7: End
    return 0;
}

