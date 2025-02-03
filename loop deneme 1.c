#include<stdio.h>

int main ()

{
    int sayi;

    printf( "bir sayi girin:");
    scanf( "%d" , &sayi);
    sayi=0;

    while (sayi<100)
    {
        printf( "%d-Merhaba", sayi);
        ++sayi;
    }
    
    return 0 ;
}