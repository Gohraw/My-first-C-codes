#include<stdio.h>

int main ()

{
    int sayi , sayi2;
    int onlar , birler;
    int i = 1;

    do
    {
    printf( "Iki basamakli bir sayi giriniz:");
    scanf( "%d" , &sayi );

    if(sayi<10 || sayi>99)
    printf("Lutfen 2 basamakli bir sayi giriniz:");
    } while (sayi<10 || sayi>99);

        do{
        birler= sayi %10;
        onlar = (sayi-birler)/10;
        sayi2 = (birler*10)+onlar;

        if(sayi>sayi2)
        sayi=sayi-sayi2;
        else
        sayi=sayi2-sayi;
        i++;
        }while(sayi>=10);

    printf( "Cikartma zincir uzunlugu: %d" , i);

    return 0;
}