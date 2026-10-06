#include <stdio.h>
#include <math.h>

int main() {
    float alas = 5;
    float tinggi = 12;

    float sisiC = sqrt((alas * alas) + (tinggi * tinggi));
    float keliling = alas + tinggi + sisiC;
    float luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", alas);
    printf("Sisi B = %.0f cm\n", tinggi);
    printf("Sisi C = %.0f cm\n", sisiC);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}