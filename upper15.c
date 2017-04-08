#include<stdio.h>
#include"pbh.h"
int main(int argc, char **argv){
    long test = 0xa5a51234;
    short u15;
    if (argc != 2) {
        puts("usage: blah blah blah...");
    }
    printf("%i\n",sizeof(long));
    u15 = return_u15(test);
    printf("%x\n",u15);

    return 0;
}

short return_u15(long arg){
    short rv;
    rv = arg >> 17;
    return(rv);
}

/* long chartolong(char *arg){
 *     int sl;
 *     long rv;
 *     }
 */
