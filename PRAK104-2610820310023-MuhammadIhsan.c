#include <stdio.h>

int main() {
    int hargaA = 400000;
    int hargaB = 350000;

    int hargaAakhir = hargaA - (hargaA * 13 / 100);
    int hargaBakhir = hargaB - (hargaB * 21 / 100);

    printf("Harga sepatu A adalah %d\n", hargaA);
    printf("Harga sepatu B adalah %d\n", hargaB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", hargaAakhir);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %d\n", hargaBakhir);

    return 0;
}