#include <stdio.h>

int main ()
{
	int n=1;
	
	while (n<=100)
	{
		if (n%3==0)
		{
			printf("%d Es multiplo de 3\n",n);
		}
		else
		{
			printf("%d No es multiplo de 3\n", n);
		}
		n+=1;
	}
	
	return 0;
}
