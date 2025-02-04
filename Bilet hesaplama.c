#include<stdio.h>

int main ()

{
    int kisi, k=0;
    int yas;
    float top =0;

    printf( "Ailedeki birey sayisini giriniz:");
    scanf( "%d", &kisi);

   
        while ( kisi != k)
        {
        printf( "%d kisinin yaslarini giriniz:", kisi);
        scanf( "%d" , &yas);
        if( yas<=10)
        top= top + 1;
        else if( yas<=17)
        top = top + 1.5;
        else if( yas<=26)
        top = top + 4.75;
        else if( yas<=50)
        top = top + 7;
        else
        top= top + 5.25;

        k++;
        }

    printf( "Odenecek toplam ucret: %.2f" , top );

   

    return 0;
}