#include<stdio.h>

void uzaklik( int[] , int);

int main(){

    int i , adet , dizi[50];
    float cap;

    printf( "Kac adet bilye capi gireceksiniz (1-50) : " );
    scanf( "%d" , &adet );
    if(adet<1 || adet>50){
        printf( "\nYanlis!!! (1-50) arasinda sayi girin " );
        printf( "\nKac adet bilye capi gireceksiniz (1-50) : " );
        scanf( "%d" , &adet );
    }

    printf( "\n%d adet cap giriniz : " , adet);
    for( i=0 ; i<adet ; i++ ){
        scanf( "%f" , &dizi[i]);
        }
    uzaklik( dizi , adet);

    return 0;
}

void uzaklik( int dizi[] , int adet){

    int i , eb=0 , ek=0 , sonuc;

    for( i=0 ; i<adet ; i++ )
        if( eb<dizi[i] )
        eb=i;

    ek=dizi[i];
    for( i=0 ; i<adet ; i++ )
        if( ek>dizi[i] )
        ek=i;   

    sonuc=eb-ek;

    printf( "\nEn buyuk ve en kucuk arasinda %d adet bilye vardir" , sonuc);    
} 