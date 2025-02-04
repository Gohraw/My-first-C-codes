#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void siralama( int );

int main() {

    int adet ;

    srand(time(NULL));

    printf( "kac adet sayi gireceksiniz: " );
    scanf( "%d" , &adet );
    siralama( adet );

    return 0;
}

void siralama( int adet ){

    int i , j , yedek , dizi[100] ;

    for(i=0 ; i<adet ; i++)
        dizi[i]= 1 + rand() %10;
        
    printf( "\nSirasiz hali : " );
    for( i=0 ; i<adet ; i++)
        printf( "%d " , dizi[i]);    

    for( i=0 ; i<adet ; i++)
        for( j=0 ; j<adet-i ; j++)    
            if( dizi[j] > dizi[j+1]){
                yedek=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=yedek;
            }

    printf( "\nSirali hali : " );
    for( i=0 ; i<adet ; i++)
        printf( "%d " , dizi[i]);

    for( i=0 ; i<adet ; i++){
        printf( "\n");
        for( j=0 ; j<dizi[i] ; j++ )
        printf( "*");               
    }        
}