#include<stdio.h>

void fonk( int* , int* , int* , int* , int , char );

int main(){

    int sayi1 , sayi2 , sayi3 , sayi4 , tur ;
    char yon ;
    int *ps1 = &sayi1 , *ps2 = &sayi2 , *ps3 = &sayi3 , *ps4 = &sayi4 ;

    printf( "4 adet sayi giriniz : " );
    scanf( "%d" , &sayi1);
    scanf( "%d" , &sayi2); 
    scanf( "%d" , &sayi3);
    scanf( "%d" , &sayi4);

    printf( "Cevirme yonunu secin (D veya T) :" );
    scanf( " %c" , &yon );

    printf( "Kac tur dondureceksiniz :" );
    scanf( "%d" , &tur ); 

    printf( "Sayilarin cevrilmeden onceki halleri : a  b  c  d \n\t\t\t\t       %d  %d  %d  %d" , sayi1 , sayi2 , sayi3 , sayi4 );

    fonk( &sayi1 , &sayi2 , &sayi3 , &sayi4 , tur , yon );

    printf( "\nSayilarin cevrildikten sonraki halleri : a  b  c  d \n\t\t\t\t         %d  %d  %d  %d" , *ps1 , sayi2 , sayi3 , sayi4 ); 

    return 0;
}

void fonk ( int* ps1 , int* ps2 , int* ps3 , int* ps4 , int tur , char yon ){

    int yedek  , i ;

    switch( yon ){

        case'D':
        case'd':
            for(i=0 ; i<tur ; i++){
                yedek=*ps4;
                *ps4=*ps3;
                *ps3=*ps2;
                *ps2=*ps1;
                *ps1=yedek;
            }
            break;
        case'T':
        case't':
            for(i=0 ; i<tur ; i++){
                yedek=*ps1;
                *ps1=*ps2;
                *ps2=*ps3;
                *ps3=*ps4;
                *ps4=yedek;
            }
            break;
        default:
            printf( "Hatali islem");
            break;    
    }
}