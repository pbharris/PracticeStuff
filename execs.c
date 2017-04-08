/*
 * execs.c - shows us how execve works
 */
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	char *args[] = {"/bin/ls", NULL};
	if(execve("/bin/ls",args,NULL) == -1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}
	puts("should not get here");
	exit(EXIT_SUCCESS);
}
			

