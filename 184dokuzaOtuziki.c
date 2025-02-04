#include<stdio.h>

int cal( int , int);

int main(){

    int n , r ;

    printf( "Permutasyonun n ve r sini girin :");
    scanf( "%d %d" , &n , &r);
    printf( "%d" , cal( n , r ));

    return 0;
}

int cal( int n , int r){

    int sonuc , pay=1 , payda , payda2 = 1;
    
    payda= n-r;

    for( ; payda != 0 ; payda--)
        payda2= payda*payda2;
    for( ; n != 0 ; n--){
        pay = n*pay;    
    }
    
    sonuc=pay/payda2;

    return sonuc;
}