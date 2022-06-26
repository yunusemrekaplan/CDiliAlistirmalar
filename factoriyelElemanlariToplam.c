#include <stdio.h>

unsigned long long faktoriyel(int sayi);
int rakamToplam(unsigned long long n);

int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	
	int fact = faktoriyel(num);
	printf("%d",fact);	
	
	int sum = rakamToplam(fact);
	printf("\n%d",sum);
	
    return 0;
}

unsigned long long faktoriyel(int num)
{
    if (num == 1 || num == 0)
    	return num;
    else
    	return num * faktoriyel(num - 1);
}


int rakamToplam(unsigned long long n)
{
	int i,a,b;
	int sum = 0;
	
	for(i=0; i<100; i++)
	{
		if( n == 0 )
		{
			break;
		}
		a = n % 10;
		b = n / 10;
		sum += a;
		n = b;
	}
	return sum;
}
