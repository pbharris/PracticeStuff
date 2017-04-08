#include<stdio.h>
/* #include"crap1.h" */
typedef struct {
 char fname;
 int  age;
 char lname;
}pbhlist;
 
typedef struct {
	struct pbhlist *foo;
	char pooh;
}dd;

int main()
{
	 pbhlist *list1;
	 dd  list2;
	 (int)list1 = malloc(sizeof(list1));
	 list1->fname = 'a';
	 list1->age = 532;
	 list1->lname = 'd';
	 printf("first initial is %c,  age is %d and last initial us %c\n",list1->fname, list1->age, list1->lname);
	 printf("The size of list is %x bytes\n",sizeof(pbhlist));
	 free(list1);
	 dd.foo->fname = 's';
	 dd.foo->age = 123;
	 dd.foo->lname = 'z';
	 dd.pooh = 'd'
	 printf("dd.foo->fname is %c, dd.foo->age is %d, dd.foo->lname is %c, and dd.pooh is %c\n",	 dd.foo->fname ,dd.foo->age, dd.foo->lname, dd.pooh);
 return(0);
}
