/*
 * resusage1.c - get process and resource usage
 */
#include<stdio.h>
#include<stdlib.h>
#include<sys/times.h>
#include<time.h>
#include<unistd.h>
void doit(char *,clock_t);
int main(void)
{
	clock_t start, end;
	struct tms t_start, t_end;
	start = times(&t_start);
	/* redirect output to avoid clutter */
	system("grep the /usr/doc/*/* > /dev/null 2> /dev/null");
	end = times(&t_end);
	doit("elapased", end -start);
	puts("parent_time");
	doit("\tuser CPU",t_end.tms_utime);
	doit("\tsys CPU",t_end.tms_stime);
	puts("child times");
	doit("\tuser CPU",t_end.tms_cutime);
	doit("\tsys CPU",t_end.tms_cstime);
	exit(EXIT_SUCCESS);
}

/* doit */
void doit(char *str, clock_t time)
{
	/* get clock ticks/second */
	long tps = sysconf(_SC_CLK_TCK);
	printf("\t\t%s: %6.2f secs\n",str,(float)time/tps);
}


