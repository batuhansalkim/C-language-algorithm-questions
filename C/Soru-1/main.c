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

    printf("Dikd�rtgen prizman�n a,b ve h uzunluklarini giriniz : \n"  );
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
/*
int main(){
    int a,b;

    printf("iki sayi giriniz ondalikli da olabilir : ");
    scanf("%d%d",&a,&b);

    if(a!=b){

        if(a<b){
                printf("sayilar birbirine esit degil\n");
            printf("%d sayisi %d sayisindan daha kucuktur",a,b);
        }
        else{
            printf("sayilar birbirine esit degil\n");
            printf("%d sayisi %d sayisindan daha kucuktur",b,a);
        }
    }
    else{
        printf("sayilar birbirine esit");
    }

}
*/

//5.Soru
/*
int main(){
    int a;

    printf("bir sayi giriniz :");
    scanf("%d",&a);

    while(a!=0){
        printf("%d\n",a);
        a-=1;
    }
}
*/
//6. SOURU
/*
int main(){
    int a,i;

    printf("sayi giriniz : ");
    scanf("%d",&a);

    int sonuc=0;
    i=1;
    while(i<=a){
        sonuc = sonuc +i;
        i++;
    }
    printf("sayilarin toplami : %d",sonuc);
}
*/

//7. SORU
/*
int main(){
    float sayi;

    printf("bir sayi girisi yapiniz: ");
    scanf("%f",&sayi);

    printf("f(%.3f)=%.3f",(sayi*sayi*sayi)+ (13*sayi*sayi) + (47*sayi) + 5);


}
*/


//8. SORU
/*
int main(){
    int a, b;

    printf("iki tane sayi girisi yapiniz :\n");
    scanf("%d%d",&a,&b);

      if((a>0 && b>0) || (a<0 && b<0)){
        printf("sign(%d * %d) = +1",a,b);
      }
      else if((a>0 && b<0) || (a<0 && b>0)){
        printf("sign(%d * %d) = -1",a,b);
      }
      else{
        printf("sign(%d * %d ) = 0",a,b);
      }
}
*/

/*
//9. SORU
int main(){
    int sayi;
    int i=0;

    printf("sayi giriniz :");
    scanf("%d",&sayi);

    while(i<=sayi){
            if(i%17==0){
                printf("sayi :%d\n",i);
            }
            i++;
    }
}
*/

//10. SORU
/*
int main(){

    int sayi,birlerBas,onlarBas,yuzlerBas;

    printf("bir sayi giriniz : ");
    scanf("%d",&sayi);
    birlerBas = sayi%10;
    onlarBas = sayi %100/10;
    yuzlerBas = sayi /100;
    printf("birler basamagi : %d\n",birlerBas);
    printf("onlar basamagi : %d\n",onlarBas);
    printf("yuzler basamagi : %d",yuzlerBas);

}
*/

//11.SORU
int main(){
    float yol,km;

    printf("kac mil yol gittiginizi giriniz :");
    scanf("%f",&yol);

    km = yol*1609;
    printf("Girdiginiz mili km'ye ceviriyoruz");

    printf("Mil : %f\n Km: %f",yol,km);
}





