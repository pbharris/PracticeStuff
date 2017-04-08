/*
 * getname.c - gets a users rela login name,  not a number
 */
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<pwd.h>
int main(void)
{
	char *login;
	struct passwd *pentry;
	/* get the loggin name */
	if((login = getlogin()) == NULL)  /*opps*/
	{
		perror("get_login");
		exit(EXIT_FAILURE);
	}
	printf("getlogin returned %s\n",login);
	/* get password entry for login */
	if((pentry = getpwnam(login)) == NULL)  /*opps*/
	{
		perror("getpwnam");
		exit(EXIT_FAILURE);
	}
	/* display the name */
	printf("gecos: %s\n",pentry->pw_gecos);
	exit(EXIT_SUCCESS);
}

