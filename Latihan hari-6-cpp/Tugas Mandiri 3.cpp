#include <stdio.h>

int main() {
    // Menggunakan loop for untuk mencetak deret
    int value = 1;
    for (int i = 0; i <= 10; i++) {
        printf("%d ", value);
        value *= 2;
    }

    return 0;
}
