#include<stdio.h>

int main ()

{
    int sayi;

    printf( "bir sayi girin:");
    scanf( "%d" , &sayi);
    

    while (sayi<100)
    {
        printf( "%d-Merhaba\n", sayi);
        ++sayi;
    }
    
    return 0 ;
}