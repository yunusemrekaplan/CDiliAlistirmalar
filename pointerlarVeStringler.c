#include <stdio.h>
#include <string.h>

int benimStrlen(char *p)
{
	int i = 0;
	
	while( p[i] != '\0')
	{
		i++;	
	}
	return i;
}

int main()
{
	char yazi[] = "tura";
	
	printf("%d",benimStrlen(yazi));

	return 0;
}
