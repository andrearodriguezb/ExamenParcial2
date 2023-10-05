#include <stdio.h>

int main()
{
	int r=0;
	int r1=0;
	int r2=0;
	int suma, res, mult, div;
	float a;
	
	srand(time(NULL)); 
	do
	{
		r=rand() % (5+1-1) +1;
		printf("%d.", r);	
		
		if (r==1)
		{
			r1=rand() %10;
			r2=rand() %10;
			suma=r1+r2;
			printf("%d+%d= %d\n", r1, r2, suma);
		}
		
		else if(r==2)
		{
			r1=rand() %10;
			r2=rand() %10;
			res=r1-r2;
			printf("%d-%d= %d\n", r1, r2, res);
		}
		else if(r==3)
		{
			r1=rand() %10;
			r2=rand() %10;
			mult=r1*r2;
			printf("%d*%d= %d\n", r1, r2, mult);
		}
		else if(r==4)
		{
			r1=rand() %10;
			r2=rand() %10;
			div=r1/r2;
			printf("%d/%d= %d\n", r1, r2, div, a);
		}
		else if(r==5)
		{
			printf("Fin del programa :D");
		}
	
	}while (r!=5);
	
	return 0;
}
