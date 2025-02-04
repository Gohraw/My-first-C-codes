#include<stdio.h>
#include<math.h>

int islem(int , int , int);
int toplam(int, int);



   

int main(){

    int basamak , basla , bitir;

    printf( "bir basamak girin");
    scanf( "%d" , &basamak);
    bitir=pow(10 , basamak);
    basla=pow(10 , basamak++);
    printf( "%d" , islem(basamak,basla,bitir));


    return 0;
}

int islem( basamak,basla,bitir ){
    
    for(; bitir != basla ; basla--)
        if(basla==pow(toplam(basla, basamak), 3))
            return basla;

}

int toplam(basla , basamak){
         
    int eksi=0, top=0;

    while(basla!=0){
    top=basla%10;
    eksi=top;
    basla-=eksi;
    eksi=0;
    }
    return top;
}    