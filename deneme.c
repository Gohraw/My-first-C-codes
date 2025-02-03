#include <stdio.h>

int main()

{
    int vize1;
    int vize2;
    int final;
    float puan;

    printf( "ilk vize notu:" );
    scanf( "%d" , &vize1 );
    printf( "ikinci vize notu:" );
    scanf( "%d" , &vize2 );
    printf( "final notu:" );
    scanf ( "%d" , &final );
    puan = (vize1 * 0.2) + (vize2 * 0.2) + (final * 0.6);

      
    if ( 50>final || 50>puan )
    {
        printf( "You didn't pass F" );
    }
    else if ( 90<puan)
    {
        printf( "Your grade is A" );
    }   
    else if ( 80<puan)
    {
        printf( "Your grade is B" );
    }
    else if ( 70<puan)
    {
        printf( "Your grade is C" );
    }
    else if ( 60<puan)
    {
        printf( "Your grade is D" );
    }
    else if ( 50<puan)
    {
        printf( "Your grade is E" );
    }
    else
    {
        printf( "Your grade is F \n you failed");
    }
    
 return 0;   
}    
 