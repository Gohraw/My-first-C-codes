#include<stdio.h>

int enbuyukbasamak( int );

int main(){

    int sayi;

    printf( "Bir sayi girin:");
    scanf( "%d" , &sayi);
    printf( "%d" , enbuyukbasamak(sayi));

    return 0;
}

int enbuyukbasamak( int sayi){

    int basamak=0 , kalan , enbuyuk= 0;

    while( sayi != 0){
        kalan= sayi % 10;
        if(kalan>enbuyuk){
          enbuyuk=kalan;
          basamak++;  
        }
    sayi=sayi-kalan;
    }
    
    return basamak;
}