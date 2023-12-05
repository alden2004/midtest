#include <stdio.h>

int main() {
    int bilangan;
    long long faktorial = 1;

    // Input bilangan dari pengguna
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    // Menghitung faktorial
    if (bilangan < 0) {
        printf("Faktorial tidak dapat dihitung untuk bilangan negatif.\n");
    } else if (bilangan == 0) {
        faktorial = 1;
    } else {
        for (int i = 1; i <= bilangan; ++i) {
            faktorial *= i;
        }
    }

    // Menampilkan hasil
    printf("Faktorial dari %d = %lld\n", bilangan, faktorial);

    return 0;
}
