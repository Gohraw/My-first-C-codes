#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void sirala( int[] , int);

int main(){

    int eleman , otodizi[50] , i;
    srand(time(NULL));
    printf( "Eleman sayisini giriniz (1-50) : " );
    scanf( "%d" , &eleman);
    for(i=0 ; i<eleman ; i++)
        otodizi[i]=1+rand()%100;
    printf( "\nDizinin sirasiz hali :");
    for(i=0 ; i<eleman ; i++)
        printf( "%d " , otodizi[i]);    
    sirala( otodizi , eleman );

    return 0;
}

void sirala( int sira[] , int eleman ){

    int i , j  , yedek , ortanca ;

    for(i=0 ; i<eleman ; i++)
        for(j=0 ; j<eleman ; j++)
            if(sira[j] > sira[j+1]){
                yedek=sira[j];
                sira[j]=sira[j+1];
                sira[j+1]=yedek;
             }
    printf( "\nDizinin sirali hali :");
    for(i=0 ; i<eleman ; i++)
        printf( "%d " , sira[i]);
        
    if( eleman % 2 != 0)
        ortanca=(eleman+1)/2; 
    else
        ortanca=(((eleman+2)/2)+((eleman)/2))/2;
    printf( "Ortanca sayi : %d" , ortanca);            
}        