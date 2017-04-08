#include<stdio.h>
/*  argc - number of arguments
 *  argv[] - argument1, argument2, etc....
 */
int char2int(char tmp[]);
int main(int argc, char **argv){
    int tmp1;
    int tmp2;
    printf("argc is %d \n",argc);
    if(argc != 3){
        puts("usage = something....");
    }
    else{
        /* note argv passes in the pointer address */
        tmp1 = char2int(argv[1]);
        tmp2 = char2int(argv[2]);
        printf("**(argv+1) is %c \n",**(argv+1));
        printf("This is the same as *argv[1] whichi is also %c \n",*argv[1]);
        printf("**(argv+2) is %c \n",**(argv+2));
        printf("This is the same as *argv[2] whichi is also %c \n",*argv[2]);
        puts("");
        printf("*argv+1 is located at 0x%x \n",*argv+1);
        printf("*argv+2 is located at 0x%x \n",*argv+2);
        printf("tmp1 is %d \n",tmp1);
        printf("tmp2 is %d \n",tmp2);
        printf("that plus that is %d \n",tmp1+tmp2);
    }
    return 0;
}
         
int char2int(char *tmp){
    int i,n;
    n = 0;
    for(i = 0;*(tmp+i) >= '0' && *(tmp+i) <= '9';++i){
        n = 10*n + (*(tmp+i) - '0');
    }
    return n;
}



