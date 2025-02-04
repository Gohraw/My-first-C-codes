#include<stdio.h>

int ilktekrar( int[] , int);

int main(){

    int dizi[7]= {3 ,12 ,1 , 12 ,7, 7,12} , c;

    c=ilktekrar ( dizi , 7);
    if (c != -1) 
        printf("Dizinin ilk tekrarlayan sayisi = %d\n", c);
    else 
        printf("Dizide tekrar eden eleman yok.\n");

    return 0;
}

int ilktekrar( int dizi[] , int size ){

    int tekrar , i , j , yedek;

    for( i=0 ; i<size ; i++){   
        for( j=1 ; j<size ; j++ )
            if(dizi[j] == dizi[i])
                return dizi[i];
    }
        

    return -1;
}