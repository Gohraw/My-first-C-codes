#include<stdio.h>

void TekCiftDüzenle( int[] );

int main(){

    int numbers[15] , i;

    printf( "Dizinin elemanlarini giriniz (15 adet) : " );
    for( i=0 ; i<15 ; i++)
        scanf( "%d" , &numbers[i] );
    TekCiftDüzenle( numbers );

    return 0;
}

void TekCiftDüzenle ( int numbers[] ){

    int i , j , yedek;

    for(i=0 ; i<14 ; i++)
        for(j=0 ; j<14 ; j++)
            if( numbers[j] %2 == 0){
                yedek=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=yedek;
            } 
    printf( "\nDizinin düzenlenmiş hali : \n");

    for(i=0 ; i<15 ; i++)
        printf( "%d " , numbers[i]);

}
