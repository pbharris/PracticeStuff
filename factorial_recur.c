#include<stdio.h>
/*  argc - number of arguments
 *  argv[] - argument1, argument2, etc....
 */
long double factorial(int);
int main(int argc, char **argv){
    long double test = 32;
    long int tmp1;
    printf("long double 32 is %10e \n",test);
    if(argc != 2){
        puts("usage = one number to  factor....");
    }
    tmp1 = atoi(*(argv++));
    printf("tmp1 is %d \n",tmp1);
    printf("tmp1 factorial is %u \n",factorial(tmp1));
}

long double factorial(int tmp){
    int value;
    long double result;
    result = 0;
    value = tmp;
    if(value == 0){
       result = 1;
    }
    else
    result=factorial(value*(--value));
    printf("%d! is %ld  \n",value,result);
    return(result); 
}
