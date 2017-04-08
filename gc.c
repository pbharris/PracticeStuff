#include<stdio.h>
#define xor(a,b) (a&&!b || !a&&b)
main(){
	int c,d,e;
	c = 3;
	d = 4;
	/*
	while ((c = getchar()) != EOF) */
	{
	/*char(c); */
		e = xor(c,d);	
		printf("%d\n",e);
	}
}	
