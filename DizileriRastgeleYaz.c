#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void karistir( int[]);

int main(){

    int  dizi[5]= { 12 , 11 , 10 , 8 , 9 } , i ;
    srand(time(NULL));

    for( i=0 ; i<5 ; i++)
        printf( "%d " , dizi[i]);
    printf( "\n");    
    karistir( dizi);

    return 0;
}

void karistir( int dizi[] ){

    int i , j , a=0 , yedek , rastgele1 , rastgele2 , yedekdizi[5];


    for( i=0 ; i<10 ;i++)
        for( j=0 ; j<4 ; j++){
            rastgele1=rand() %5;
            rastgele2=rand() %5;
            if(rastgele1 != rastgele2){    
            yedekdizi[j]=dizi[rastgele2];
            dizi[rastgele2]=dizi[rastgele1];
            dizi[rastgele1]=yedekdizi[j];
            if(dizi[j] == yedekdizi[j])
                a++;
             if(a==5)
             continue;       
            }
        }
    printf( "\nYeni dizi : \n");
    for( i=0 ; i<5 ; i++)
        printf( "%d " , dizi[i]);
}