#include<stdio.h>
#define BIT3 (1 << 3)
int main() {
   unsigned int *test0;
   unsigned int test1 = 0xFFFFFFFF;

   struct s1 {
       int b0 : 1;
       int b1 : 1;
       int b2 : 1;
       int b3 : 1;
       int b4 : 28;
   }*str1;

   test0 = (int *)malloc(2*sizeof(unsigned int));

   if (test0 == NULL) {
       puts("no memory!!");
       return(0);
   }

   struct s1 *str1;     
   str1 =  malloc(2*sizeof(s1));
   *test0 = 0x0;
   printf("test0 is 0x%0x \n",*test0);
   *test0 |= BIT3;
   printf("test0 is 0x%0x \n",*test0);
   printf("test0 address is 0x%0x \n",test0);
   printf("test0 address +1 is 0x%0x \n",++test0);
   puts("****************************************");
   printf("test1 is 0x%0x \n",test1);
   test1 &= ~BIT3;
   printf("test1 is 0x%0x \n",test1);  
   /* Need to decrement 'test0' to return to original location */
   free(--test0);
   puts("****************************************");
   str1->b0 = 1;
   return (0);
}
