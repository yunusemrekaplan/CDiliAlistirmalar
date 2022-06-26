#include<stdio.h>//kütüphanelerimizi oluþturduk.
#include<conio.h>
#include<string.h>
int m(char jaja[80])//yardýmcý fonksiyonumuzu oluþturduk.burada kelime sayýsý hesaplanacak."jaja" yerine istediðiniz ismi yazabilirsiniz ben kafama göre öyle yazdým.
{ int i=0;

while(i<=80)//döngüye alýyoruz burada for döngüsüne de alýnabilirdi sizin tercihinize kalmýþ bir durum.
{ if(jaja[i] == '\0') return i;
i+=1;
}
return i;
} 

int main()//ana fonksiyonumuzu oluþturduk.
{ int s;
char jaja[80];

printf("\n yaz : ");
gets(jaja);

s = m(jaja);

printf("\n %d karakter girdiniz . ",s);//ekran çýktýmýzý alýrýz.

getch();
return 0;//programýmýzýn sonuna geldik.
}

