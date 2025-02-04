#include<stdio.h>

void islem( int bas , int bit ){

    while( bas != bit ){
        if( bas %4 == 0 || bas %7 == 0)
        printf( " %d," , bas);
        bas++;
    }

}


int main(){

    int bas , bit , sonuc;

    printf( "Baslangic sayisini giriniz:");
    scanf( "%d" , &bas );
    printf( "\nBitis sayisini giriniz:");
    scanf( " %d" , &bit);

    islem(bas,bit);


    return 0;
}