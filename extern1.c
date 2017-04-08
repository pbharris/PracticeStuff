#include "extern2.h"
extern int x;
int main()
{
	printf("this is from main - x is %d \n",x);
	dogit();
    x = 9;
	catit();
}



