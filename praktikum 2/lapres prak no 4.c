#include <stdio.h>

void main()
{
    float bilangan1, bilangan2;
    printf("Masukan Bilangan Pertama: ");
    scanf("%f", &bilangan1);

    printf("Masukan Bilangan Kedua: ");
    scanf("%f", &bilangan2);

    printf("Penjumlahan \t= %0.2f", bilangan1 + bilangan2);
    printf("\nRata-rata \t= %0.2f", (bilangan1 + bilangan2) / 2);
    printf("\nKuadrat 1 \t= %0.2f", bilangan1 * bilangan1);
    printf("\nKuadrat 1 \t= %0.2f", bilangan2 * bilangan2);
}