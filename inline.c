#include<stdio.h>
inline int inc(int *a);
int main(void)
{
	int i = 0;
	while(i < 10)
	{
		inc(&i);
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}
inline int inc(int *a)
{
	(*a)++;
}


