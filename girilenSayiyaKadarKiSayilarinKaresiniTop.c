#include <stdio.h>

int sayiAl(int sayi)
{
	printf("1'den buyuk bir sayi giriniz: ");
	scanf("%d",&sayi);
	return sayi;
}

int hesapla(int sayi)
{
	int sum,i,k;
	
	sum = 0;
	
	for(i=1; i<sayi; i++)
	{
		k   = i * i;
		sum = sum + k;
	}
	return sum;	
}

int main()
{
	int sayi;
	int sum;
	int sayi1;
	
	sayi1 = sayiAl(sayi);
	sum = hesapla(sayi1);
	
	printf("%d",sum);
	
	return 0;
}
