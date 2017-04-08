#include"extern2.h"

void dogit(void)
{
    x = 5;
	printf("this is from dogit - x is %d \n",x);
}

void catit(void)
{
    extern int x;
	printf("this is from catit - x is %d \n",x);
}


