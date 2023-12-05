#include <stdio.h>

int main() {
    // Deklarasi variabel
    float panjang, lebar, luas;

    // Input panjang dan lebar dari pengguna
    printf("Masukkan panjang persegi panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar persegi panjang: ");
    scanf("%f", &lebar);

    // Menghitung luas persegi panjang
    luas = panjang * lebar;

    // Menampilkan hasil
    printf("Luas persegi panjang: %.2f\n", luas);

    return 0;
}
