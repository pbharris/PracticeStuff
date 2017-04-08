#include<stdio.h>
/* #include"crap1.h" */
typedef struct {
	llist *dlink;
	char fname;
	int  age;
	char initial;
}llist;
 
int main()
{
	llist *list1;
	llist *list2;
	(int)list1 = malloc(sizeof(llist));
	list1->dlink = *list2;
	list1->fname = 'a';
	list1->age = 532;
	list1->initial = 'd';
	printf("first initial is %c,  age is %d and last initial us %c\n",list1->fname, list1->age, list1->initial);
	printf("the address of list2 is %c \n",list2);
	printf("The size of list is %x bytes\n",sizeof(llist));
	free(list1);
	return(0);
}
