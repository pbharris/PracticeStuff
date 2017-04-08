#include<stdio.h>
#include"pbh.h"
/*  argc - number of arguments
 *  argv[] - argument1, argument2, etc....
 *  **argv - argument1, argument2, etc....
 */
int char2int(char *tmp);
int *max( int a, int b);
int memcopy(void *dest, void *src, int num_bytes);
/*   */
int main(int argc, char **argv){
    int m1,m2,tmp;
    int *max1;
    int a1;
    uint8 *a2;
    printf("argc is %d \n",argc);
    if(argc <= 3){
        puts("usage = something....");
    }
    m1 = char2int(*(argv+1));
    m2 = char2int(*(argv+2));
    a1 = char2int(*(argv+3));
    max1 = max(m1,m2);
    printf("max is %d \n",*max1);
    tmp = MAX(m1,m2);
    printf("MAX is %d \n",tmp);
    tmp = MIN(m1,m2);
    printf("MIN is %d \n",tmp);
    puts("allocating an int....");
    a2 = (uint8 *)malloc(1*sizeof(uint8));
    if(a2 == NULL){
        puts("no mem");
        exit(0);
    }
    *a2 = 0xFF&a1;
    /* To get value of 0x43 enter 67 */
    printf("*a2 is %x \n",*a2);
    *a2 |=BIT2;
    printf("*a2 after setting bit 2 is %x \n",*a2);
    *a2 &=~BIT3;
    printf("*a2 after clearing bit 3 is %x \n",*a2);
    *a2 &=~BIT0;
    printf("*a2 after clearing bit 0 is %x \n",*a2);
    if(*a2 & BIT4 == 0){
        puts("bit 4 is low");
    }
    else{
        puts("bit 4 is high");
    }
    if(*a2 & 0x10 == 0){
        puts("bit 4 is low");
    }
    else{
        puts("bit 4 is high");
    }
    printf("*a2 after testing bit 4 is %x \n",*a2);
    puts("setting bit 4");
    *a2 |= BIT4;
    if(*a2 & BIT4 == 0){
        puts("bit 4 is low");
    }
    else{
        puts("bit 4 is high");
    }
    printf("*a2 after testing bit 4 is %x \n",*a2);
    /*****/
    puts("clearing bit 4");

    *a2 &= ~BIT4;
    if(*a2 & BIT4 == 0){
        puts("bit 4 is low");
    }
    else{
        puts("bit 4 is high");
    }
    printf("*a2 after clearing bit 4 is %x \n",*a2);


return(0);
}

int max2;

int *max( int a, int b) {
   max2 = (a > b)? a : b;
   return &max2;
}

int char2int(char *tmp){
    int i,n;
    n = 0;
    for(i = 0;*(tmp+i) >= '0' && *(tmp+i) <= '9';++i){
        n = 10*n + (*(tmp+i) - '0');
    }
    return(n);
}

int memcopy(void *dest, void *src, int num_bytes){
    return(0);
}
