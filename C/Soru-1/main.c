#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//SORU 1

/*
int main(){
    int a, b, c, x;
    printf("a,b,c,x degerlerini giriniz: ");
    scanf("%d %d %d %d",&a,&b,&c,&x);

    printf("Sonuc : %d", a*x*x + b*x + c );

}
*/
//2. SORU
/*
int main(){
    int a,b,h;

    printf("Dikdörtgen prizmanýn a,b ve h uzunluklarini giriniz : \n"  );
    scanf("%d%d%d",&a,&b,&h);

    int taban_alani = a*b;
    int yanal_alanlar = 2*((a+b)*h);
    int toplam_alani = 2*(a*b + a*h + b*h);
    int hacim = a*b*h;

    printf("taban Alani  %d\n",taban_alani);
    printf("Yanal alanlar toplami %d\n ",yanal_alanlar);
    printf("toplam alan %d\n ",toplam_alani);
    printf("hacmi %d \n",hacim);

}
*/

//3.SORU
/*
int main(){
    int a,b,c;
    int min,max;

    printf("Lutfen 3 sayi giriniz : ");
    scanf("%d%d%d",&a,&b,&c);

    max = a;

    if(b>max){
       max = b;
    }
    if(c>max){
        max = c;
    }
    printf("Max degerimiz : %d\n ",max);

    min = a;
    if(b<min){
        min = b;
    }
    if(c<min){
        min = c;
    }
    printf("min degeri : %d",min);

}
*/

// 4. SORU
int main(){
    int a,b;

    printf("iki sayi giriniz ondalikli da olabilir : ");
    scanf("%d%d",&a,&b);

    if(a!=b){

        if(a<b){
                printf("sayilar birbirine esit degil\n");
            printf("%d sayisi %d sayisindan daha kucuktur",a,b);
        }

    }
    else{
        printf("sayilar birbirine esit");
    }



}

