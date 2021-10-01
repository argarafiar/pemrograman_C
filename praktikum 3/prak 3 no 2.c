#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("==============================================\n");
    printf("    ------Program Kalkulator Gaji--------     \n");
    printf("==============================================\n");
    int asuransi = 20000, gapok, masker, harker, jmanak, tjistri,
        tjanak, THR, trans, pajak, gjtotal, yt;
    printf("Masukkan Gaji Pokok : ");
    scanf("%d", &gapok);
    printf("Masukkan Masa Kerja (tahun) : ");
    scanf("%d", &masker);
    printf("Masukkan Hari Kerja (1-31) : ");
    scanf("%d", &harker);
    printf("Menikah atau tidak (y/t) : ");
    scanf("%d", yt);
    yt = getchar();
    if ((yt == 'y') || (yt == 'y'))
    {
        printf("Berapa Jumlah Anak : ");
        scanf("%d", &jmanak);
        tjistri = gapok * 0.10;
        tjanak = 0.5 * jmanak * gapok;
    }
    printf("==============================================\n");
    printf("       -----Hasil Kalkulasi-----             \n");
    printf("==============================================\n");
    THR = 5000 * masker;
    trans = 3000 * harker;
    pajak = 0.15 * (gapok + tjanak + tjistri);
    gjtotal = gapok + tjanak + tjistri + THR - pajak - asuransi;
    printf("\nTHR Yang Diterima : Rp. %.2d", THR);
    printf("\nTunjangan Istri : Rp. %.2d", tjistri);
    printf("\nTunjangan Anak : Rp. %.2d", tjanak);
    printf("\nPajak : Rp. %.2d", pajak);
    printf("\nJumlah Tunjangan Yang Diterima : Rp. %.2d", tjanak + tjistri + THR + trans);
    printf("\nPotong Pajak dan Asuransi : Rp. %.2d", pajak +
                                                         asuransi);
    printf("\nJumlah Gaji Akhir : Rp. %2d", gjtotal);
}
