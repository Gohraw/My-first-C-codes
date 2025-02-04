#include<stdio.h>

int main ()

{
    char op , a , b , c;
    int parca , sira = 1;
    int satis=0 , aa=0 , bb=0 , cc=0;
    

    printf( "Kac parca alacaksizniz:");
    scanf( "%d" , &parca);

    do{

        printf( "\n%d . urunu girin " , sira);
        scanf( " %c" , &op);
        switch (op)
        {
        case 'A':
        case 'a':
            aa++;
            if( aa>=bb && aa>=cc)
            satis++;
            break;
        case 'B':
        case 'b':
            bb++;
            if( bb>=aa && bb>=cc)
            satis++;
            break;
        case 'C':
        case 'c':
            cc++;
            if( cc>=bb && cc>=aa)
            satis++;
            break;
          default:
            break;
        }
    printf( "En cok satilan urun veya urunler:");
    if( aa>=bb && aa>=cc)
    printf( "A");
    if( bb>=aa && bb>=cc)
    printf( " B");
    if( cc>=bb && cc>=aa)
    printf( " C");
    printf( "\nsatilan urun sayisi = %d" , satis);
    sira++;
    }while( sira != parca  );
    

    return 0;
}