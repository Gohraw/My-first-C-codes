#include<stdio.h>

int main ()

{
    int sayi , sira =0; 

    printf( "Enter the height of triangle:");
    scanf( "%d" , &sayi );
    printf( "\n");

    while( sayi != 0 ){

     while( sayi != sira )
     {
      printf( "%d", sayi);
      sira++;
     } 
     sayi--;
     sira=0;
     printf( "\n");
    }




    return 0;
}