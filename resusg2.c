/*
 * resusage2.c - get process and resource usage
 */
#include<stdio.h>
#include<stdlib.h>
#include<sys/times.h>
#include<sys/resource.h>
#include<time.h>
#include<unistd.h>
void err_quit(char *str);
void doit(char *,long resval);
int main(void)
{
	struct rusage usage;
	/* redirect output to avoid clutter */
	system("grep the /usr/doc/*/* > /dev/null 2> /dev/null");
	if((getrusage(RUSAGE_SELF, &usage))== -1)
		err_quit("getrusage");
	
	puts("Parent Times");
	doit("\tuser CPU",usage.ru_utime.tv_sec);
	doit("\tsys CPU",usage.ru_stime.tv_sec);
	puts("Parent memory stats");
	doit("\tminor faults",usage.ru_minflt);
	doit("\tmajor faults",usage.ru_majflt);
	doit("\tpage swaps",usage.ru_nswap);
	/* get resouce structure for the child */
	if((getrusage(RUSAGE_CHILDREN, &usage))== -1)
		err_quit("getrusage");
	puts("Child Times");
	doit("\tuser CPU",usage.ru_utime.tv_sec);
	doit("\tsys CPU",usage.ru_stime.tv_sec);
	puts("Child memory stats");
	doit("\tminor faults",usage.ru_minflt);
	doit("\tmajor faults",usage.ru_majflt);
	doit("\tpage swaps",usage.ru_nswap);


	exit(EXIT_SUCCESS);
}

/* doit */
void doit(char *str, long resval)
{
	/* get clock ticks/second */
	printf("\t%s: %ld \n",str,resval);
}

/* err_quit */
void err_quit(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}


