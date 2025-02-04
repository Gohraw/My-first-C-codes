#include<stdio.h>

void ortyukdus(int[] , int[] , int[] , char[][10] );
void basari(int[] , int[] , int[] , char[][10]); 

int main(){

    int ali[3]={70,85,60} , ayse[3]={90,70,80} , mehmet[3]={65,55,45} ;
    int fatma[3]={60,75,85} , zeynep[3]={80,90,95} , ahmet[3]={40,30,50} ;
    char a[3][10]={ "Ali" , "Ayse" , "Mehmet"}  ,  b[3][10]={ "Fatma" , "Zeynep" , "Ahmet" } ;

    printf( "9A Sinifi:");
    ortyukdus( ali , ayse , mehmet , a);
    basari( ali , ayse , mehmet , a);
    printf( "\n\n9B Sinifi:");
    ortyukdus( fatma , zeynep , ahmet , b);
    basari( fatma , zeynep , ahmet , b);
    

    return 0;
}

void ortyukdus( int ali[] , int ayse[] , int mehmet[] , char sinif[][10]){

    int i , j , yedek , sira[9] ;
    float ortalama=0;
    char buyuk;

    for(i=0 ; i<3 ; i++){
        sira[i]=ali[i];
        sira[i+3]=ayse[i];
        sira[i+6]=mehmet[i];
        }

    for(i=0 ; i<9 ; i++)
        ortalama=ortalama + sira[i];
    

    for(i=0 ; i<8 ; i++)
        for(j=i+1 ; j<9 ; j++)
            if( sira[i] < sira[j]){
                yedek=sira[i];
                sira[i]=sira[j];
                sira[j]=yedek;
            }
    printf( "\nSinif not ortalamasi: %.2f" , ortalama/9);
    printf( "\nEn yuksek notu alan ogrenci : ");

    for(i=0 ; i<3 ; i++){
        if(sira[0]==ali[i])
        printf(" %s , Not: %d" , sinif[0]  , sira[0] );
        else if(sira[0]==ayse[i])
        printf(" %s , Not: %d" , sinif[1] , sira[0] );
        else if(sira[0]==mehmet[i])
        printf(" %s , Not: %d" , sinif[2] , sira[0] );
    }

    printf( "\nEn dusuk notu alan ogrenci : ");

    for(i=0 ; i<3 ; i++){
        if(sira[8]==ali[i])
        printf(" %s , Not: %d" , sinif[0]  , sira[8] );
        else if(sira[8]==ayse[i])
        printf(" %s , Not: %d" , sinif[1] , sira[8] );
        else if(sira[8]==mehmet[i])
        printf(" %s , Not: %d" , sinif[2] , sira[8] );
    }

}

void basari(int ali[] , int ayse[] , int mehmet[] , char sinif[][10]){

    int i , ort1=0 , ort2=0 , ort3=0 , ortlar[3];

    for(i=0 ; i<3 ; i++){
        ort1=ort1+ali[i];
        ort2=ort2+ayse[i];
        ort3=ort3+mehmet[i];
    }
        ortlar[0]=ort1/3.0;
        ortlar[1]=ort2/3.0;
        ortlar[2]=ort3/3.0;
    
    for(i=0 ; i<3 ; i++){
        printf( "\n%s" , sinif[i]);
        if(ortlar[i] > 50)
        printf(" Basarili ");
        else
        printf(" Yetersiz ");
    } 

}

