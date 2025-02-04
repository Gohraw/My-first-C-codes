#include<stdio.h>

int buyukkucuk (int);

int main(){

    int sayi;

    printf( "Bir sayi girin" );
    scanf( "%d" , &sayi );
    printf( "En buyuk basamak = %d", buyukkucuk(sayi));

    return 0;
}

int buyukkucuk (sayi){

    int b1=100 , b2=10 , buyuk=0 , at=0 , kopya ,bas=0 , d1=0 , d2=0;
     kopya=sayi;
    while(kopya !=0){
        kopya /= 10;
        bas++;
    }

    for(int i ; i<bas; i++){
    d1= sayi % 10;
    d2= (sayi%b1) / b2  ;
    if(d2>buyuk)
    buyuk=d2;
    if(d1>buyuk)
    buyuk=d1;
    b2*=10;
    b1*=10;
    }

    return buyuk;



}