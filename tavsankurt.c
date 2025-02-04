#include<stdio.h>

int main ()

{
    int day = 1;
    int tavsan = 10000 , kurt = 10000;

    do{
        printf( "\n\n%d. gun" , day);
        printf( "\n------------");
        printf( "\ntavsan = %d , kurt = %d" , tavsan , kurt );
        tavsan = (1+0.01)*tavsan - (0.00001*tavsan*kurt);
        kurt = (1-0.005)*kurt + (0.00001*0.01*tavsan*kurt);
        day++;

    }while(day != 101);




    return 0;
}