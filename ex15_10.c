#include<stdio.h>
void func1(void (*p)(void));
void one(void);
void two(void);
void other(void);
main()
{
	void ((*ptr)(void));
	int a;
	for(;;)
	{
		puts("enter an integrer between 1 and 10 , 0 will exit");
		scanf("%d",&a);
		if (a == 0)
			break;
		else if (a == 1)
			ptr = one;
		else if (a == 2)
			ptr = two;
		else 
			ptr = other;
		func1(ptr);
	}
}

void func1(void (*p)(void))
{
	p();
}
void one(void)
{
	puts("ya entered 1");
}

void two(void)
{
	puts("ya entered 2");
}
void other(void)
{
	puts("ya entered something else, didn'y cha! not a one or a two or a zero...");
}









