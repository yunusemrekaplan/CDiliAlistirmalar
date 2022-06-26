#include <stdio.h>

/*

sayi:6

1*****
*1****
**1***
***1**
****1*
*****1

*/

/*
int main()
{
	int i,j,k;
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	for(i=1; i<=num ; i++)
	{
		for(j=1; j<=num; j++)
		{
			if(j==i)
			{
				printf("1");
			}
			else
			{
				printf("*");	
			}
		}
		printf("\n");
	}
	return 0;
}
*/


/*

*
**
***

*/

/*
int main()
{
	int i,j,k;
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	for(i=1; i<=num ; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/

/*

***
**
*

*/

/*

int main()
{
	int i,j,k;
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	for(i=num; i>=1 ; i--)
	{
		for(j=i; j>=1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

*/

/*

******
.*****
..****
...***
....**
.....*

*/

/*
int main()
{
	int i,j,k;
	int num;
	int bosluk;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	bosluk=0;
	for(i=num; i>=1; i--)
	{
		for(k=0; k<bosluk; k++)
		{
			printf(" ");
		}
		for(j=i; j>=1; j--)
		{
			printf("*");
		}
		printf("\n");
		bosluk++;
	}
	return 0;
}
*/

/*

sayi:6

.....*
....**
...***
..****
.*****
******

*/

/*
int main()
{
	int i,j,k;
	int num;
	int bosluk;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	bosluk = num-1;
	for(i=1; i<=num; i++)
	{	
		for(k=bosluk; k>0; k--)
		{
			printf(" ");
		}
		
		for(j=i; j>=1; j--)
		{
			printf("*");
		}
		printf("\n");
		bosluk--;
	}
	return 0;
}
*/


/*

sayi:5

*****
*   *
*   *
*   *
*****

*/

/*

int main()
{
	int i,j,k;
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)	
	{
		for(j=1; j<=num; j++)
		{
			if(i != 1 && i != num)
			{
				if(j != num && j != 1)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}

*/

/*

sayi:5

*****
*****
** **
*****
*****

sayi:6

******
******
**  **
**  **
******
******

*/

/*

int main()
{
	int i,j,k;
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)	
	{
		for(j=1; j<=num; j++)
		{
			if( num %2 == 1 )
			{
				if( i == num/2 + 1 && j == num/2 + 1 )
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else if( num %2 ==0 )
			{
				if( ((i == num/2 && j == num/2) || (i == num/2  && j == num/2 +1)) || (( i == num/2 +1 && j == num/2 ) || ( i == num/2 +1 && j == num/2 +1 )) ) 
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
	return 0;
}

*/

/*

sayi:5
*****
*****

*****
*****

sayi:6

******
******


******
******

*/

/*
int main()
{
	int i,j,k;
	int num;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			if( num%2 == 1 )
			{
				if( i == num/2 +1 )
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else if( num%2 == 0 )
			{
				if( i == num/2 || i == num/2 +1 )
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}	
	return 0;
}
*/


/*

sayi:6

     *
    ***
   *****
  *******
 *********
***********

*/

/*
int main()
{
	int i,j,k;
	int num;
	int bosluk;
	int yildiz;
	
	printf("enter a number: ");
	scanf("%d",&num);	
	
	bosluk = num-1;
	yildiz = 1;
	
	for(i=1; i<=num; i++)
	{
		for(k=bosluk; k>0; k--)
		{
			printf(" ");
		}
		for(j=1; j<=yildiz; j++)
		{
			printf("*");
		}
		printf("\n");
		bosluk--;
		yildiz+=2;
	}
	return 0;
}

*/

/*

sayi:3

  *
 ***
*****
 ***
  *  

*/


/*
int main()
{
	int i,j,k;
	int num;
	int bosluk;
	int yildiz;
	
	printf("enter a number: ");
	scanf("%d",&num);	
	
	bosluk = num-1;
	yildiz = 1;
	
	for(i=1; i<=num; i++)
	{
		for(k=bosluk; k>0; k--)
		{
			printf(" ");
		}
		for(j=1; j<=yildiz; j++)
		{
			printf("*");
		}
		printf("\n");
		bosluk--;
		yildiz+=2;
	}
	
	yildiz -= 2;
	bosluk += 1;
	
	for(i=1; i<num; i++)
	{
		bosluk++;
		yildiz-=2;
		for(k=1; k<=bosluk; k++)
		{
			printf(" ");
		}
		for(j=yildiz; j>=1; j--)
		{
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}
*/

/*
num = 7

*     *
 *   *
  * *
   *
  * *
 *   *
*     *

num = 8

*      *  
 *    *   
  *  *    
   **
   **
  *  *
 *    *
*      *
*/

/*
int main()
{
	int i,j,k,l;
	int num;

	printf("enter the number: ");
	scanf("%d",&num);

	int space2 = num-2;
	int space1 = 0;
	
	for(i=0; i<num/2; i++)
	{
		for(j=0; j<space1; j++)
		{
			printf(" ");
		}
		space1++;
		printf("*");
		for(k=0; k<space2; k++)
		{
			printf(" ");
		}
		space2 -= 2;
		printf("*");
		printf("\n");
	}
	
	if(space2 % 2 != 0)
	{
		for(j=0; j<space1; j++)
		{
			printf(" ");
		}	
		for(k=0; k<space2; k++)
		{
			printf(" "); 
		}
		printf("*");
		printf("\n");
	}
	
	space1--;
	space2 += 2;
	
	for(i=0; i<num/2; i++)
	{
		for(j=0; j<space1; j++)
		{
			printf(" ");
		}
		space1--;
		printf("*");
		for(k=0; k<space2; k++)
		{
			printf(" ");
		}
		space2 += 2;
		printf("*");
		printf("\n");
	}
return 0;
}
*/
