#include <stdio.h>

int main()
{
	int a=0;
	
	printf("Introduzca un año: ");
	scanf("%d", &a);
	
	printf("\n");
	
	if (a%4==0 && a%100!=0 || a%400==0)
	{
		printf ("Es bisiesto");
	}
	else
	{
		printf ("NO es bisiesto");
	}
	
	return 0;
}

