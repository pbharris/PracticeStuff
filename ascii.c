#include<stdio.h>
int main()
{
	int m;
	char *a1[50];
	a1[0] = "this is a1";
	char *s = {"char   decimal   hex "};
	int i;
	char j = 'A';
	printf("%s\n",a1[0]);
	printf("\t\t\t  %s\n",s);
	for(i = 'A';i < 'z';i++){
		printf("\tthe ASCII value for %c is %d, in hex %x  \n",j,i,i);
		j++;
	}
	for(i = '0'; i <= '9';i++){
		printf("\tthe ASCII value for %c is %d, in hex %x  \n",i,i,i);
	}
	m = (j == (int)NULL) ? (i > 3) :j;
	printf("%d\n",m);

}
