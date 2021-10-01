#include <stdio.h>
#include <stdlib.h>
int main()
{
    int jumlahtiket, jumlahpaket, sisatiket, bayar, harganormal, hemat;
    printf("==============================================\n");
    printf("    ------Program Tiket Diskon--------     \n");
    printf("==============================================\n");
    printf("Masukkan Jumlah Tiket : ");
    scanf("%d", &jumlahtiket);

    sisatiket = jumlahtiket % 3;
    jumlahpaket = jumlahtiket / 3;
    bayar = jumlahpaket * 100000 + sisatiket * 50000;
    harganormal = 50000 * jumlahtiket;
    hemat = harganormal - bayar;
    printf("==============================================\n");
    printf("\nTotal Pembayaran : Rp. %d", bayar);
    printf("\nHarga Normal    : Rp. %d", harganormal);
    printf("\nAnda menghemat    : Rp. %d", hemat);
}
