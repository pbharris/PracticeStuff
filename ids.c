/*
 * ids.c 
 * prints the PID and PPID 
 * plus user and group info
 */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
		printf("UID = %d\n",getuid());
		printf("Efective UID = %d\n",geteuid());
		printf("GID = %d\n",getgid());
		printf("Efective GID = %d\n",getegid());
		exit(EXIT_SUCCESS);
}
