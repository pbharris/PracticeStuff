/*
 * 2alarm.c
 */
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	long int errret;
	/*set the alarm */
	if((alarm(15)) > 0){
		puts("an alarm was already set.");}
	/*set a new alarm */
	sleep(3);
	errret = alarm(5);
	if(errret > 0){
		printf("%ld seconds left in first alarm \n",errret);}
	/* cancel second alarm */
	sleep(2);
	printf("%d seconds left on second alarm \n",alarm(0));
	exit(EXIT_FAILURE);
}

/*
	if((alarm(5)) > 0){
		puts("an alarm was already set.");}
	sleep(30);
	puts("how the hell did we get here??");
	exit(EXIT_FAILURE);
*/
