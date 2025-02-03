#include <stdio.h>

int main ()

{
    char sart;
    double primg;
    double maas;
    double gunluk;


    printf( "Son 3 ay kesintisiz calistiniz mi (E,e, H,h ):" );
    scanf ( "%c" , &sart );
    printf( "\nPrim gun sayinizi giriniz:");
    scanf ( "%lf" , &primg);

    if ( sart == 'H' || sart == 'h' || primg < 600)
        printf( "\nMaalesef issizlik maasi odemesi alamazsiniz");
    else if ( sart == 'E' || sart == 'e') 
         {
            printf( "\nCalisirkenki son aylik maasinizi girin:");
            scanf ( "%lf" , &maas);                                 
            
            gunluk = ( maas/30)*(0.4);

            printf("\nGunluk issizlik odenegi: %.2lf TL" , gunluk );
            printf ( "\nAylik issizlik maasiniz: %.2lf TL" , gunluk*30 );
            
            if ( primg<900 )
            printf( "\nIssizlik odenegini alabileceginiz sure: 180 gun" );
            else if ( primg<1080)
            printf( "\nIssizlik odenegini alabileceginiz sure: 240 gun" );
            else 
            printf ( "\nIssizlik odenegini alabileceginiz sure: 300 gun"); 
         }
    else
        printf( "\nGecersiz Karakter");   

    
   



    return 0 ;
}