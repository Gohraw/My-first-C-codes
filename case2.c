#include<stdio.h>

int main()

{
    char meslek;
    int ay;
    float sure;
    
    printf( "Calisma durumunu giriniz (Memur m,M - Diger d, D)   :" );
    scanf ( "%c" , &meslek);
    printf( "\n Toplam calisma surenizi giriniz ( ay olarak )    :");
    scanf( "%d" , &ay);
    sure= ay/12.0;
     
    printf( "\n----------------");
    
    if (meslek != 'M' && meslek != 'm' && meslek != 'D' && meslek != 'd')

        printf( "gecersiz meslek");
    else if ( ay<12)   
    {
        printf( "Uzgunuz tam 1 yil dolmadigi icin izin hakkiniz yok" );
        printf( "\nCalisma sureniz = %d ay = %.2f yil eder" , ay , sure);
    }   
    else 
    {
        switch ( meslek )
    {
        case 'M':
        case 'm':
            if (ay <= 120 && meslek == 'M' && meslek == 'm')
            {
                printf( "\nizin sureniz = 20 gun");
                printf( "\nCalisma sureniz = %d ay = %.2f yil eder" , ay , sure);
            }    
            else
            {
                printf( "\nizin sureniz = 30 gun");
                printf( "\nCalisma sureniz = %d ay = %.2f yil eder" , ay , sure);
            } 
        break;
           
        case 'D':
        case 'd':
        
            if ( ay<72 )
            {
                printf( "\nizin sureniz = 14 gun");
                printf( "\nCalisma sureniz = %d ay = %.2f yil eder" , ay , sure);
            }    
            else if ( ay<180 )
            {
                printf( "\nizin sureniz = 20 gun");
                printf( "\nCalisma sureniz = %d ay = %.2f yil eder" , ay , sure);
            }
            else
            {
                printf( "\nizin sureniz = 26 gun");
                printf( "\nCalisma sureniz = %d ay = %.2f yil eder" , ay , sure);
            }  
         break;
        
        default: 
        printf( "gecersiz ay veya meslek"); 
        break;
    }
    
} 
return 0;   
}
