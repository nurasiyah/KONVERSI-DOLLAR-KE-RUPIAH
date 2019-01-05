#include<stdio.h>
#include<conio.h>
int main()
{
    long rupiah=15100,dollar,kurs;
    printf("PROGRAM KONVERSI DOLLAR KE RUPIAH\n");
    printf("Masukkan nilai Dollar $USD =");scanf("%i",&dollar);
    kurs=rupiah*dollar;
    printf("kurs = %i * %i = Rp %i",dollar,rupiah,kurs);
    getch();
}
