#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void cal( int , char );

int main(){
    
    printf( "Ilk cagriliyor\n" );
    cal( 100 , 'T');
    printf( "\nikinci cagriliyor" );
    cal( 500 , 'Y');

    return 0;
}

void cal( int sayi , char sec ){

    int sayt=0 , sayy=0 , sonuc=0;
    srand(time(NULL));
    switch(sec)
    {

        case 'T':
        case 't':
                  for( int i=0 ; i<sayi ; i++ ){
                  sonuc= 1 + rand() %2 ;
                  if(sonuc == 1)
                      sayt++;
                   }
                   printf( "oran = %d" , sayt);
                   break;
        case 'Y':
        case 'y':
                  for( int i=0 ; i<sayi ; i++ ){
                  sonuc= 1 + rand() %2 ;
                  if(sonuc == 2)
                      sayy++;
                   }
                   printf( "\noran = %d" , sayy);
                   break;
        default:
                printf( "Gecersiz sayi");            

    }


  


}