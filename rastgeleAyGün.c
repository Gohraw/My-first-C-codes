#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void cal( int , char);

int main(){
    
    int adet;
    char mevsim;

    printf( "adet ve mevsim giriniz:");
    scanf( "%d %c" , &adet , &mevsim);
    cal( adet , mevsim);

    return 0;
}

void cal( int adet , char mevsim ){

    int gun, ay, yil;
    srand(time(NULL));

    for( int i= 0 ; i != adet ; i++){
    switch(mevsim)
    {
        case 'İ':
        case 'i':
                ay= 3+ rand() %3;
                break;
        case 'S':
        case 's':
                ay= 9+ rand() %3;
                break;
        default:
            break;        
    }
        gun= 1 + rand() %30;
        yil= 2024 + rand() % 50;
        printf( "\n%d/%d/%d" , gun, ay, yil);
    }    
}
