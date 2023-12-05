#include <stdio.h>
#include <stdbool.h>

// Deklarasi fungsi untuk mengecek bilangan prima
bool isPrime(int num);

int main() {
    int number;

    // Meminta input dari pengguna
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &number);

    // Memanggil fungsi isPrime() untuk menentukan apakah bilangan tersebut prima atau bukan
    if (isPrime(number)) {
        printf("%d adalah bilangan prima.\n", number);
    } else {
        printf("%d bukan bilangan prima.\n", number);
    }

    return 0;
}

// Fungsi untuk mengecek bilangan prima
bool isPrime(int num) {
    // Bilangan kurang dari 2 bukan prima
    if (num < 2) {
        return false;
    }

    // Mengecek apakah bilangan memiliki faktor selain 1 dan dirinya sendiri
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false; // Bilangan bukan prima
        }
    }

    return true; // Bilangan prima
}