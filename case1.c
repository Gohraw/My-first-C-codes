#include <stdio.h>

int main ()

{
    int daire;
    int dik;
    int kare;
    int ucgen;
    char secim;
    int ycap;

    printf( "-------MONU-------");
    printf( "\n(D veya d)  Daire");
    printf( "\n(T veya t)  Dikdortgen");
    printf( "\n(K veya k)  Kare");
    printf( "\n(U veya u)  Ucgen");
    printf( "\n------------------");
    printf( "\nSeciminiz:");
    scanf( " %c" , &secim );
  
    switch ( secim )
    {
        case 'D':
        case 'd':
            printf( "Dairenin yaricap uzunlugunu girin:");
            scanf( "%d" , ycap);
            secim= (3*ycap*ycap);
            break;
        case 'T':
        case 't':
            printf( "Dikdortgen alani");
            break;
        default:
            printf( "Gecersiz islem");
    }

    return 0;
}