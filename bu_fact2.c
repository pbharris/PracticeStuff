/* Compile with:
 * gcc -o bufact -lm -O2 bufact.c
 */ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/* okay lets find all pairs of factors for an input number
* all input numbers must be integers greater than zero
* and checked to see if it is valid. Number must also be
* less than the maximum value for a unsigned interger (16 bits) */
#define TRUE 1
#define FALSE 0
#define START 1
#define MAX_SIZE 0xFFFFFFFFFFFFFFFF
typedef unsigned long UINT32;
typedef unsigned int BOOL;
typedef unsigned long long UINT64;
BOOL is_valid(UINT64 num); /* determines if passed value is okay */
void factor_num(UINT64 num); /* factors the numbers  */
/******************************************************************************/ 
int main(int argc,char *argv[]) {
   UINT64 number;
   if (argc != 2){
      printf("Needs an argument \n");
      exit(0);
   }
   printf("biggest number allowable is %llu \n",MAX_SIZE);
   printf("before atoi the number is %s \n",argv[1]);
   number = (int)atoll((argv[1]));

   printf("the number entered is %llu \n",number);
   if (is_valid(number)==FALSE)
   {
          exit(0);
   }
 factor_num(number);
 return(0);
}
/* lets see if we were passed garbage - this will return
* FALSE if the input is not valid and TRUE if the input
* is valid */
BOOL is_valid(UINT64 num)
{
      if (num > MAX_SIZE )  /*largest UINT64 long */
      {
              puts("that number is too fucking big \n");
              return(FALSE);
      }
      else if (num <= 0)
      {
              puts("either thats zero - or less than zero \n");
              return(FALSE);
      }
      else
      {
              return(TRUE);
      }
}

/* this will find all pairs of numbers which are factors of the
* number passed in and print them.                                                              */

void factor_num(UINT64 number)
{
       UINT64 *val1;
       UINT64 *val2;
       int index = START;  
       /*start at 1,  number and 1 will always be factors */
       int total_factor_pairs = 1; /* there will always be one pair*/
       int i;
       float lowlim,highlim;
       val1=(UINT64 *)malloc(1024*sizeof(UINT64));
       val2=(UINT64 *)malloc(1024*sizeof(UINT64));
       if (val1 == NULL){
	       puts("No free mem");
	       exit(EXIT_FAILURE);
       }
       if (val2 == NULL){
	       puts("No free mem");
	       exit(EXIT_FAILURE);
       }
       if(number <= 3)
       {
               lowlim = 1;
       }
       else
       {
               lowlim = sqrt(number) ;
       }
       highlim = number/2;
       *val1 = number;
       *val2 = 1;
       /*only need from the sqrt of num ber to 1/2 number */
       for ( i = lowlim; i <= highlim ; i++)
       {
      if((int)number%i == 0)
                {
       total_factor_pairs++;
        *(val1+index) = number/i;
        *(val2+index) = i;
         index++;
      }
               
       }
       puts(" ");
       printf("there are %d factor pairs, they are:\n",total_factor_pairs);
       for(i = total_factor_pairs-1 ;i >= 0 ;i--)
       {
               printf("\t %d \t %d \n",*(val1+i),*(val2+i));
       }
       free(val1);
       free(val2);
}
