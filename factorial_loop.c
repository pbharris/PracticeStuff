#include<stdio.h>
/*  argc - number of arguments
 *  argv[] - argument1, argument2, etc....
 */
long double factorial(int);
int main(int argc, char **argv){
    long double test = 32;
    long int tmp1;
    if(argc != 2){
        puts("usage = one number to  factor....");
    }
    printf("long double 32 is %ld \n",test);
    tmp1 = atoi(*(argv+1));
    printf("tmp1 is %d \n",tmp1);
    printf("tmp1 factorial is %ld \n",factorial(tmp1));
}

long double factorial(int tmp){
    int i;
    long double result = 1;
    if(tmp==0){
       result=1;
    }
    else{
        for(i = tmp; i > 1;--i){ 
            result *= i;
            printf("%d! is %ld \n",i, result);
        }
    return(result); 
    }
}
