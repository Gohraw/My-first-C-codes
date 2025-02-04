#include<stdio.h>

int main ()

{
    int konuk , talip , yas = 0;
    int f = 0 , a = 0 , e = 0;

    printf( "Konugun yasini giriniz:" );
    scanf( "%d" , &konuk );
    printf( "Talibin yasini giriniz:" );
    scanf( "%d" , &talip );

    do{
        yas = talip + yas;

        if( talip > konuk)
        f++;
        else if ( talip < konuk)
        a++;
        else
        e++;

        printf( "Talibin yasini giriniz:" );
        scanf( "%d" , &talip );

    }while( talip != 0 );

    yas= yas/( f + a + e);
    printf( "\nKkonuktan daha yasli taliplerin sayisi = %d" , f);
    printf( "\nKonuktan daha genc taliplerin sayisi = %d" , a);
    printf( "\nKonuktan ayni yas taliplerin sayisi = %d" , e);
    printf( "\nTaliplerin yas ortalamasi = %d" , yas );

    return 0;
}