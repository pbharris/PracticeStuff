#include<stdio.h>
#include <stdlib.h>
#include "test.h"
char * get_message(void);
char * get_message(void){
    char msg[] = "Aren't pointers fun?";
    return msg;

int main(int argc,char ** argv){
    char * string;
    string = get_message();
    puts(string);
    return 0;
}
/*int nmax = 20;
 *int k;
 *int *ptr0;
 *int main()
 *{
 *    int a=0,b=1,c,n;
 *    unsigned long int x;
 *    long double flt;
 *    / *allocate 20 time the size of int starting at the address ptr0 okay * /
 *    ptr0 = (int*)malloc(20*sizeof(int));
 *    if (ptr0 == NULL){
 *        puts("no mem");
 *        exit(1);
 *    }
 *    printf("ptr0 is at %0x \n",ptr0); 
 *    printf("The size of an int is %d \n",sizeof(int));
 *    printf("The size of an unsigned long int is %d \n",sizeof(x));
 *    printf("The size of an long double float is %d \n",sizeof(flt));
 *    puts(" ");
 *    for(k = 0; k < 20; k++) {
 *    	printf("The address %0x contains %d and k is %d\n",ptr0,*ptr0,k);
 *    	*ptr0++ = k*2;
 *    }
 *    printf("%3d:%d\n",1,a);
 *    printf("%3d:%d\n",2,b);
 *    nmax=25;
 *    for( n = 3 ; n <= nmax ; n++) {
 *        c = a + b; 
 *        a = b; 
 *        b = c;
 *        printf("%3d:%d\n",n,c) ;
 *}
 *
 *
 *}
 */




/*
int i, *ptr;
struct cksum *file0;
struct cksum *file1;
file0->total = 3;
file0->number = 4;
file1 = file0;
(int *)file1 = *ptr;
*ptr = 5;
printf("the total of file0 is %d and the number is %d\n",file0->total, file0->number);
printf("the total of file1 is %d and the number is %d\n",file1->total, file1->number);	
}
*/
