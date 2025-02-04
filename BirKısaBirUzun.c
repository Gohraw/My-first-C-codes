#include<stdio.h>

void BirKisaBirUzun( float[]) ;

int main(){

    int i;
    float lenght[13];

    printf( "12 oyuncunun boylarini giriniz : \n " );
    for(i=0 ; i<12 ; i++ )
    scanf( "%f" , &lenght[i] );
    BirKisaBirUzun( lenght );                   

    return 0;
}


void BirKisaBirUzun( float lenght[] ){

    int i , j;
    float yedek;                             // sayilar : 1.64 1.87 1.74 1.89 2.05 1.66 1.97 2.00 1.79 1.99 1.56 1.73
    for(i=0 ; i<11 ; i++)
        for(j=0 ; j<11 ; j++)                      
            if(lenght[j] > lenght[j+1]){
                yedek=lenght[j];
                lenght[j]=lenght[j+1];
                lenght[j+1]=yedek;   
            }

    for(i=0 ; i<12 ; i++)
        printf( "%.2f " , lenght[i] );
    printf("\n");
    for( i=0 , j=11 ; i<12/2 ; i++){
        printf( "%.2f %.2f " , lenght[i] , lenght[j]); 
        j--;
        }
}
