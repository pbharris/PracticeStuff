#include<stdio.h>
#include <stdlib.h>
#include <string.h>
/* get arguement from input in main */
int main(int argc, char *argv[])
{
    /* char chr; */
    float df;
    df = atoi(argv[1]);
    /* chr = atoi(argv[2]); */
    puts("");
    printf("\n %.02f in degrees F is %.02f \n",df,((df - 32)*5/9));
    /* printf("\n The charactor is %c \n",chr); */
    return (0);
}
