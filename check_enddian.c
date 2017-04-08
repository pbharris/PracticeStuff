#include<stdio.h>
#include"pbh.h"
int main(int argc, char **argv){
    int i;
    int *j;
    if (argc != 2){
        puts("usage: blah blah blah...");
    }
    printf("%i\n",sizeof(int));
    i = atoi(*(++argv));
    j = &i;
    printf("%x\n",i);
    printf("%x\n",j);
    test_m();
    return 0;
}


void test_m(void)
{
    int x = 1;
    printf("this machine has a") ;
    (*(char*)&x) ? printf("n Intel") : printf(" Motorola") ;
    printf(" based processor\n") ;
}

