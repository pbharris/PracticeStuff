/*
 * mysleep.c
 */
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	if((alarm(5)) > 0){
		puts("an alarm was already set.");}
	sleep(30);
	puts("how the hell did we get here??");
	exit(EXIT_FAILURE);
}

