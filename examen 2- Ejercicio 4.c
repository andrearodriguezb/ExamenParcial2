#include <stdio.h>

//Este programa intercambia el orden de las variables que le asignes

int main ()
{
	int x, v1, v2, v3, extra;
	
	printf("Dame 3 numeros\n");

for (x=0; x<1; x++)
	{	
	printf("v1:");
	scanf("%d", &v1);
	printf("v2:");
	scanf("%d", &v2);
	printf("v3:");
	scanf("%d", &v3);
	}
	
	extra=v1;
	v1= v2;
	v2=v3;
	v3=extra;

	printf("\n");

	printf("Variables ntercambiadas :)\n");
	printf("v1: %d\n", v1);
	printf("v2: %d\n" , v2);
	printf("v3: %d\n", v3);

	
	
	return 0;
}



