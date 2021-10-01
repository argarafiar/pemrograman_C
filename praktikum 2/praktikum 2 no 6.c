#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar;
    int nomer;

    printf("==========================================\n");
    printf("     --PROGRAM INPUT OUTPUT--\n");
    printf("==========================================\n");
    printf("Masukkan Nomer anda     : ");
    scanf("%d", &nomer);
    printf("Masukkan karakter input : ");
    scanf("%s", &kar);
    printf("=====================================\n");
    printf("NRP  anda        : %d  \n", nomer);
    printf("karakter output  : %c \n", kar);
    return 0;
}
