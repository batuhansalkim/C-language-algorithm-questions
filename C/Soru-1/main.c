#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.141
#define tam 150
#define tavhiz 0.038
#define kushiz 0.012
#define vergi_kitap 4.0
#define vergi_temelgida 5.6
#define vergi_luks 19.6
#define kitap 0
#define gida 1
#define luks 2

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
//9.SORU
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
/*
int main(){
    float yol,km;

    printf("kac mil yol gittiginizi giriniz :");
    scanf("%f",&yol);

    km = yol*1609;
    printf("Girdiginiz mili km'ye ceviriyoruz");

    printf("Mil : %f\n Km: %f",yol,km);
}
*/
//12.SORU
/*
int main(){
    float en,boy,yukseklik;
    printf("Havuzumuzun eni boyu ve yüksekligi :");
    scanf("%f%f%f",&en,&boy,&yukseklik);
    printf("Havuzumuz %f kadar su alabilir.",en*boy*yukseklik);
}
*/
//13.SORU
/*
int main(){
    int a,b,c;
    printf("A sayisini giriniz :");
    scanf("%d",&a);
    printf("B sayisini giriniz :");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("A sayisinin degeri : %d\n",a);
    printf("B sayisinin degeri : %d\n",b);
}
*/
//14.SORU
/*
int main(){
    float metre,tutar;

    printf("Kac metrekare kaplama yapilacak :");
    scanf("%f",&metre);

    tutar = 200 + (metre * 40);

    printf("ödenmesi gereken para tutarı : %.2f",tutar);

}
*/
//15.SORU
/*
int main(){
    char kod;
    float alan,ucret=0;
    printf("Hali tipini seciniz T B S :");
    scanf("%c",&kod);
    printf("lutfen alani giriniz :");
    scanf("%f",&alan);

    if(kod == 'T'){
       ucret = alan * 18;
       printf("odemeniz gereken ucret : %.2f",ucret);
    }
    else if(kod == 'B'){
        ucret = alan * 17;
        printf("odemeniz gereken ucret : %.2f",ucret);
    }
    else if(kod == 'S'){
        ucret = 19* alan;
        printf("odemeniz gereken ucret : %.2f",ucret);
    }
    else{
        printf("gecersiz harf T B S den birini giriniz ");
    }
}
*/
//16.SORU
/*
int main(){
    int n;

    printf("pozitif bir sayi giriniz :");
    scanf("%d",&n);

    if( (n%13==0) && (n%17==0)){
        printf("sayimiz 13 ve 17 ye tam bolunuyor");
    }
    else if(n%13==0){
        printf("sayimiz 13 e tam bolunuyor");
    }
    else if(n%17==0){
        printf("sayimiz 17 ye tam bolunuyor");
    }
    else{
        printf("sayimiz 13 ve 17 ye bolunemiyor");
    }
}
*/
//17.SORU
/*
int main(){
    int a,b,c;
    float ortalama;
    printf("lütfen 3 tane sayi giriniz :");
    scanf("%d%d%d",&a,&b,&c);

    ortalama = (a+b+c) / 3;
    printf("sayilarin ortalamasi : %.2f",ortalama);

}
*/
//18. SORU
/*
int main(){
    float hiz,zaman;
    int yol = 450;

    printf("zamani saat cinsinden giriniz :");
    scanf("%f",&zaman);

    hiz = yol / zaman;
    printf("arabanin ortalama hizi :%.2f",hiz);
}
*/
//19.SORU
/*
int main(){
 char can;
 printf("bir karakter giriniz :");
 scanf("%c",&can);
 if((can >='A') && (can <= 'Z')){
    printf("kucuk harf yazimi : %c",tolower(can));
 }else{
     printf("yanlis karakter girisi yapildi");
 }
}
*/
//20.SORU
/*
int main(){
    int a,b;
    printf("iki sayi girisi yapiniz :");
    scanf("%d%d",&a,&b);
    if((a<0 && b<0) || (a>0 && b>0)){
        printf("sayilarin carpimi pozitif");
    }
    else if(a>0 || b>0){
        printf("sayilarin carpim degeri sifirdir ");
    }else{
        printf("carpim degeri negeatiftir");
    }

}
*/
//21.SORU
/*
int main(){
    int a,b,c;
    printf("ucgenin 3 acisini giriniz :");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b+c == 180){
        if(a==60 && b== 60 && c==60){
            printf("bu bir eskenar ucgendir\n");
        }
        else if(a==b || a==c || b==c){
            printf("bu bir ikizkenar ucgendir\n");
        }
        else{
            printf("bu bir cesitkenar ucgendir");
        }
    }
    else{
        printf("bu bir ucgen degildir");
    }
}
*/
//22.SORU
/*
int main(){
    int gorusme_suresi,ek_ucret;
    printf("kac dk telefon gorusmesi yaptiniz :");
    scanf("%d",&gorusme_suresi);

    if(gorusme_suresi<=3){
        printf("odeyeceginiz ucret 0.25tl");
    }
    else{
        ek_ucret = 0.25 + ((gorusme_suresi-3) * 0.08);
        printf("odemeniz gereken ucret :  %d tl",ek_ucret);
    }
}
*/
//23.SORU
/*
int main(){
    int sayi1, sayi2;
    char op;
    printf("islem seciniz (+ veya -) :");
    scanf("%c",&op);
    printf("lutfen iki tam sayi giriniz :\n");
    scanf("%d%d",&sayi1,&sayi2);

    if((sayi1==0) || (sayi2==0)){
        printf("islem yapilamaz sayilar sifirdan farkli olsun");
    }
    else{
        printf("1/%d %c 1/%d\n",sayi1,op,sayi2);
        switch(op){
            case '+':{
                printf("%d/%d",sayi1+sayi2/sayi1*sayi2);
            }
            break;

            case '-':{
                printf("%d/%d",sayi1-sayi2/sayi1*sayi2);
            }
            break;
            default:{
                printf("yanlis operator girisi yapildi");
            }
        }
    }
}
*/
//24.SORU
/*
int main(){
    char ch;
    int sira;
    printf("Bir karakter giriniz:\n");
    scanf("%c",&ch);
    if((ch>='A') && (ch<='Z'))
    {
        sira = (int)ch-(int)'A'+1;
    }
    else if((ch>='a')&& (ch<='z')){
        sira = (int)ch - (int)'a'+1;
    }
    else{
        printf("HATA harf girisi yapiniz ");
    }
    printf("%c : %d. harftir",ch,sira);
}
*/
//25 .SORU
/*
int main(){
    int i,n;
    float x,seri;

    printf("pozitif sayi giriniz :");
    scanf("%d",&n);
    printf("reel sayi giriniz :");
    scanf("%f",&x);

    for(i=1;i<=2*n-1;i+=2){
        seri+=i/pow(x,i+1);
    }
    printf("Seri  =%f",seri);
}
*/
//26. SORU
/*
int main(){
    int no,boy,fark,minboy,minno;
    printf("ogrenci no :");
    scanf("%d",&no);
    printf("ogrenci boy : ");
    scanf("%d",&boy);

    minno = no;
    fark = abs(boy - tam);

    while(no>0){
        printf("ogrenci no : ");
        scanf("%d",&no);
        printf("ogrenci boy :");
        scanf("%d",&boy);

        if(abs(boy-tam)<fark){
            fark = abs(boy-tam);
            minno=no;
            minboy=boy;
        }
    }
    printf("\n%d numarali ogrenci %d cm boyuyla %d cm e en yakindir.",minno,minboy,tam);

}

*/
//27. SORU
/*
int main(){
    float tavsan=1042,kus=2272;
    int yil = 0;
    while(tavsan<kus){
        tavsan += tavsan*tavhiz;
        kus += kus*kushiz;
        yil++;
        printf("%d.yil:\n tavsan=%d kus=%d\n",yil,(int)tavsan,(int)kus);

    }
    printf("tavsanlar kuslari %d. yilda gecer",yil);
}
*/
//28. SORU
/*
int main(){
    int kod;
    float fiyat;

    printf("urunun fiyat girisini yapiniz :");
    scanf("%f",&fiyat);
    scanf("urunun kod girisini yapiniz :");
    scanf("%d",&kod);

    switch(kod){
    case 0:
        printf("fiyat : %f",fiyat+ fiyat*vergi_kitap/100);
        break;
    case 1:
        printf("fiyat : %f",fiyat+fiyat*vergi_temelgida/100);
        break;
    case 2:
        printf("fiyat : %f",fiyat + fiyat*vergi_luks/100);
        break;
    default:
        printf("HATA gecersiz kod girisi ");
    }
}
*/
//29.SORU
int main(){
    char cumle[100];
    int i=0;
    int sayac=0;

    printf("lutfen bir cumle giriniz :");
    gets(cumle);

    while(cumle[i]){
        if(cumle[i]==32){
            sayac++;
        }
        i++;
    }
    printf("girilen cumledeki kelime sayisi : %d\n",sayac+1);
}





