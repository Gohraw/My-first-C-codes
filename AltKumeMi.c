#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int altkumemi( int[] , int[]);

int main(){

    int i , aküme[10] , bküme[5]; 
    srand(time(NULL));

    printf( "A = " );
    for(i=0 ; i<10 ; i++){
        aküme[i]= 1+ rand() %100;
        printf( "%d " , aküme[i] );
    }
    
    printf( "\nB = ");
    for(i=0 ; i<5 ; i++)
        scanf( "%d" , &bküme[i] );

    if(altkumemi( aküme , bküme)==1)
        printf( "\nB , A nin alt kümesi");
    else
        printf( "\nB , A nin alt kümesi degildir");

    return 0;
}

int altkumemi ( int aküme[] , int bküme[] ){

    int i , j , sayac=0;

    for(i=0 ; i<5 ; i++)
        for(j=0 ; j<10 ; j++)
            if(bküme[i]==aküme[j]){
            sayac++;s
            }
    if(sayac==5)
        return 1;
    else
        return 0;   
}