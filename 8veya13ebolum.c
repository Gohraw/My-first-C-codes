#include<stdio.h>

int main()

{  
    int sayi;
    int uygun = 0;
    int toplam = 0;
    int i;
    int sayilar;

    do{

        printf("\nKac adet sayi gireceksiniz:");
        scanf( "%d" , &sayi);
        if(sayi<1)
        {
        printf( "\nHata !!\nAdet sifir ya da negatif olamaz");
        continue;
        }
        for(i=0 ; sayi !=0 ; i++)
        {
        printf( "\n %d adet sayi giriniz:" , sayi);
        scanf( " %d" , &sayilar );
        if(sayi % 8 ==0 || sayi % 13 ==0)
        toplam= toplam + sayilar;
        uygun++;
        }
    }while( sayi !=i);

    printf( "\nKurala uyan toplamda %d sayi girdiniz" , uygun);
    printf( "\nToplamlari = %d " , toplam);

    
    return 0;
}