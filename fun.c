#include<stdio.h>
int fun(int x);
int notfun(int x);
#define rat notfun(3)
main()
{
		int y,z,zz;
		puts("this is fun!");
		y = fun(5);
		z = notfun(2);
		zz = rat;
		printf("\t%i funtion fun \n",y);
		printf("\t%i function notfun \n",z);
		printf("\t%i macro using notfun \n",zz);
		return(0);
}
int fun(int x)
{
		int y;
		if (x==5)
		{
			y = 4;
		}
		else 
		{
			y = 1;
		}
		return(y);
}

int notfun(int x)
{
		if(x == 3)
		{
				return(32);
		}
		else
		{
				return(8);
		}
}
