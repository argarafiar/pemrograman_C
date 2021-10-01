#include <stdio.h>
#include <stdlib.h>

int main()
{

    float C, F;
    printf("=====================================\n");
    printf("    ----Program Konversi Suhu-----\n");
    printf("=====================================\n");
    printf("Masukkan suhu dalam C : ");
    scanf("%f", &C);
    F = C * 1.8 + 32;
    printf("---------------------------------------n");
    printf("\nSuhu dalam F adalah :%0.1f", F);
}
