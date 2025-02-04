#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void cal( int , char);


int main(){

    int basamak;
    char islem;

    srand(time(NULL));

    printf( "(1-3) arasinda basamak sayisi ve işlem girin( / veya *)");
    scanf( "%d %c" , &basamak , &islem);
    cal( basamak , islem );

    return 0;
}

void cal( int basamak , char islem){

    int sayi1 , sayi2 ;

    do{    

    switch(basamak){

        case 1:
                sayi1= rand() % 10;
                sayi2= rand() % 10;
                break;
        case 2: 
                sayi1= 10 + rand() % 90;
                sayi2= 10 + rand() % 90;
                break;
        case 3:
                sayi1= 100 + rand() % 900;
                sayi2= 100 + rand() % 900;
                break;
        default:
                break;        
    }

        if( islem == '*'){
            printf( "%d * %d" , sayi1 , sayi2); 
            break;
            }
        else if( islem == '/'){
            if(sayi1 % sayi2 != 0)
            continue;
            else
            printf( "%d / %d" , sayi1 , sayi2);
            }
     }while(sayi1 % sayi2 != 0);


    }   
 
