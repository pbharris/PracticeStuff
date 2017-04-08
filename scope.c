#include<stdio.h>
#include"scope.h"
int main(int argc, char **argv){
    int a,b,c;
    /*    int extv = 0;  */
    if (((argc -1) % 3 != 0) || argc < 2 ){
       puts("usage: enter three numbers \n");
       return 0;
    }
    /* increment argv every time to get next argument */
    a = atoi(*(++argv));
    b = atoi(*(++argv));
    c = atoi(*(++argv));
    printf("those added together are %i \n",add3(a,b,c));
    extv = add3(a,b,c);
    printf("The square of the sum of those is %i \n",nm(extv));
    return 0;
}
