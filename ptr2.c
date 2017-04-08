#include<stdio.h>
#include"../inc/ptr.h"
int main()
{
  int *test;
  test = malloc(4*(sizeof(test))); 
  *test = 0x00000001;


  printf("the size of a int is %0x (hex) bytes \n", sizeof(int));
  printf("the size of a int is %d (decimal) bytes \n", sizeof(int));

  printf("the size of a char is %0x (hex) bytes \n", sizeof(char));
  printf("the size of a char is %d (decimal) bytes \n", sizeof(char));

  printf("the structure p_info has 2 integers and a pointer to a string\n");
  printf("the size of p_info is %0x (hex) bytes \n", sizeof(p_info));
  printf("the size of p_info is %d (decimal) bytes \n", sizeof(p_info));
  puts("***************************************************\n");
  printf("the size of test is %d (decimal) bytes \n", sizeof(test));
  printf("test is located at 0x%0x and its value is 0x%0x \n",test,*test);
  *test = *test << 1;
  printf("test times two is 0x%0x \n",*test); 
  *test = *test << 2;
  printf("test times 4 is 0x%0x \n",*test); 
  free(test);
  return(0);
  //strct_example1();
  //strct_example2();
}



void strct_example1(void) 
{
	p_info p1; /*declare struture p1 of type p_info */
	printf("enter 2 numbers and a string\n"); /*print stuff to screen */
	scanf("%d",&p1.n1); /* have a value get put in field n1 */
	scanf("%d",&p1.n2); /* have a get put in field n2 */
	scanf("%s",p1.n3);  /* have a string get put in field n3 */
	/*the following will put out the contents of p1.n1, p1.n2, and the string entered */
	printf("number 1 is %d, number 2 is %d and the string is %s\n",p1.n1,p1.n2,p1.n3);
	/* here is an example of the output for the above section of the program 
	*  This will segfault if the string has more than one charator */
   /*-------------------------------------------------------------------------------
    *		[pbharris:~/progs/src]:./ptr 
    *		enter 2 numbers and a string
	 * 	43 65 kitty
	 *		number 1 is 43, number 2 is 65 and the string is kitty
	 *		Segmentation fault (core dumped)
	 * 	[pbharris:~/progs/src]:
	 * -----------------------------------------------------------------------------*/
}
void strct_example2(void) 
{
	p_info *p2; /*declare a pointer called p2 to a struture of type p_info */
	p2 = (p_info*)malloc(10*sizeof(p_info));
	printf("enter 2 numbers and a string\n"); /*print stuff to screen */
	scanf("%d",p2->n1); /* have a value get put in field n1 */
	scanf("%d",p2->n2); /* have a value get put in field n2 */
	scanf("%s",p2->n3);  /* have a string get put in field n3 */
	/*the following will put out the contents of p2.n1, p1.n2, and the string entered */
	printf("number 1 is %d, number 2 is %d and the string is %s\n",p2->n1,p2->n2,p2->n3);
	/* here is an example of the output for the above section of the program 
	*  This will segfault if the string has more than one charator */
   /*-------------------------------------------------------------------------------
    *		[pbharris:~/progs/src]:./ptr 
    *		enter 2 numbers and a string
	 * 	43 65 kitty
	 *		number 1 is 43, number 2 is 65 and the string is kitty
	 *		Segmentation fault (core dumped)
	 * 	[pbharris:~/progs/src]:
	 * -----------------------------------------------------------------------------*/
}
