#include<stdio.h>

int main()

{
    int sira = 1;
    int sayi;
    int buyuk = 0;
    int enbuyuk = 0;

    printf( "Sayilari girin!!!");
    scanf( "%d", &sayi);
    printf( "\n %d. sayi= %d", sira , sayi);    
        

        while( sira != 10){
            sira++;
        if( enbuyuk<= sayi)
        {
        buyuk = enbuyuk;
        enbuyuk = sayi;
        printf( "\n%d. sayi= %d", sira , sayi);    
        scanf( "%d", &sayi);
        }
        
    
        }
        

    return 0;
}