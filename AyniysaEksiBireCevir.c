#include<stdio.h>

void eleme( int[] );

int main(){

    int i , dizi[10];

    printf( "Dizinin elemanlarini giriniz : " );
    for(i=0 ; i<10 ; i++)
        scanf( "%d" , &dizi[i] );
    eleme( dizi );

    return 0;
}

void eleme( int dizi[] ){

    int i , j;

    for(i=0 ; i<9 ; i++)
        for(j=1+i ; j<10 ; j++)
            if( dizi[i]==dizi[j] ){
                dizi[i]=-1;
                dizi[j]=-1;
            }
    for(i=0 ; i<10 ; i++)
        printf( "%d " , dizi[i]);
}