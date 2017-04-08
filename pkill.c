/*
 * pkill.c - send a signal using kill
 */
#include<sys/types.h>
#include<wait.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	pid_t child;
	char *str;
	int process_id;
	if((child == fork()) < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		sleep(30);
	}
	else
	{
		/* in the parent so we kill the child */
		/* sprintf(str,"%d", child); */
		process_id = getpid();
		printf("killing %d", process_id);
		if((execl("/bin/kill", "/bin/kill",str, NULL)) < 0)
		{
			/* the exec failed - wait for status */
			perror("execl");
			waitpid(child, NULL, 0);
		}
	}
	exit(EXIT_FAILURE);
}


