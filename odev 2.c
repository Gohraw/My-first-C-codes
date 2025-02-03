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
    puan = (vize1+vize2)*(20/100)+(final)*(60/100)

      
        if ( 50>final)
        {
        printf( "you didn't pass (F)");
        }
        else if (70>puan)
        {
          printf( "you didn't pass (F)" );
        }
        else if ( puan>= 90 );
        {
          printf( "A");
        }
        

  return 0;
    }
 
   