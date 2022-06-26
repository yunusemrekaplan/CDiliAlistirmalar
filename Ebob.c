#include <stdio.h>
 
main()
{
    int sayi1,sayi2,i;
    int ebob;
        int ekok;
     
    printf("1.Sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
     
    for(i = 2; i < sayi1 && i < sayi2; i++)
    {
        if(sayi1 % i == 0 && sayi2 % i == 0)				// iki sayýyýda tam bölmesi lazým.
		{ 
            printf("Ortak bolenler = %d\n",i);
            ebob = i;
        }
        
    }
    ekok = (sayi1 * sayi2) / ebob;
    printf("\nSayilarin ekoku = %d",ekok);
    printf("\nSayilarin ebobu = %d",ebob);
}
