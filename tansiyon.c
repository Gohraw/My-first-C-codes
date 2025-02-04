#include<stdio.h>

int main()

{
    int buyuk , kucuk ;
    int yb = 0 , nb = 0 , kb = -1;   
    int yk = 0 , nk = 0 , kk = -1;   

    printf( "Tansiyon olcum prgramina hosgeldiniz\n(Durdurmak icin herhangi bir degeri sifir giriniz)");

    

    while( buyuk !=0 && kucuk !=0){

        printf( "\nTansiyon degerlerini giriniz (Buyuk ve kucuk) : ");
        scanf( "%d %d" , &buyuk , &kucuk);

        if( buyuk>140){
        printf( "Buyuk yuksek");
        yb++;
        }
        else if ( buyuk>120){     
        printf( "Buyuk normal");    
        nb++;
        }
        else{
        printf( "Buyuk dusuk");    
        kb++;
        }

        if( kucuk>90){
        printf( " Kucuk yuksek");
        yk++;
        }
        else if ( kucuk>70){     
        printf( " Kucuk normal");    
        nk++;
        }
        else
        {
        kk++;    
        printf( " Kucuk dusuk");    
        }
        
        

    }

    printf( " \nBuyuk ( Yuksek = %d , Normal = %d , Dusuk = %d )" , yb , nb , kb);
    printf( " \nKucuk ( Yuksek = %d , Normal = %d , Dusuk = %d )\nTansiyon degeri girilmistir." , yk , nk , kk);


    return 0;
}