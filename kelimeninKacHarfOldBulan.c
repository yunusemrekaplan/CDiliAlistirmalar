#include<stdio.h>//k�t�phanelerimizi olu�turduk.
#include<conio.h>
#include<string.h>
int m(char jaja[80])//yard�mc� fonksiyonumuzu olu�turduk.burada kelime say�s� hesaplanacak."jaja" yerine istedi�iniz ismi yazabilirsiniz ben kafama g�re �yle yazd�m.
{ int i=0;

while(i<=80)//d�ng�ye al�yoruz burada for d�ng�s�ne de al�nabilirdi sizin tercihinize kalm�� bir durum.
{ if(jaja[i] == '\0') return i;
i+=1;
}
return i;
} 

int main()//ana fonksiyonumuzu olu�turduk.
{ int s;
char jaja[80];

printf("\n yaz : ");
gets(jaja);

s = m(jaja);

printf("\n %d karakter girdiniz . ",s);//ekran ��kt�m�z� al�r�z.

getch();
return 0;//program�m�z�n sonuna geldik.
}

