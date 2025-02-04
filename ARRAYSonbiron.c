#include<stdio.h>
#define N 10

void rotate( int[10] , int);

int main(){

    int i , dizi[100] , don;

    printf( "\nDizinin elemanlarini giriniz: " );
    for( i=0 ; i<N ; i++)
        scanf( "%d" , &dizi[i]);
    printf( "\nDonme sayisini giriniz: ");
    scanf( "%d" , &don);
    rotate( dizi , don);

    return 0;
}

void rotate( int sayilar[10] , int donme){

int i , j=0 , yedek;

for( i=0 ; i<donme ; i++){
    yedek=sayilar[0];
    for( j=0 ; j<9 ; j++){
        sayilar[j]=sayilar[j+1];
    }
sayilar[9]=yedek;
}
printf( "\nDizinin son hali : ");
for( i=0 ; i<10 ; i++)
printf( "%d " , sayilar[i]);

} 