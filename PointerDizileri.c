#include <stdio.h>

char *gunIsmi(char *gunDizisi[],int uzunluk,int index)
{
	if( index >=1 && index <= 7 )
	{
		return gunDizisi[index - 1];
	}
	else
	{
		return NULL;
	}
}

int main()
{
	char *gunler[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	int index;
	
	printf("Kacinci gun: ");
	scanf("%d",&index);
	printf("\n");
	
	char *p = gunIsmi(gunler,7,index);
	
	if( p == NULL )
	{
		printf("Pointer NULL");
	}
	else
	{
		printf("%s",p);
	}
	
	return 0;
}
