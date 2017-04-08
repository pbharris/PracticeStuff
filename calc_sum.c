#include<stdio.h>
#define UINT8 unsigned char
/*
 * Sloppy prog - calculates sum of hex chars entered
 */ 
int main(int argc, char **argv){
    if (argc != 2){
        puts("usage: enter line to get sum calculated - values are treated as hex...");
        puts("example:");
        puts("calc_sum  0123abc");
        puts("Will return 0x28 ");
    }
    else{
        char *tmp;
        char tmpc;
        int  tmpn;
        int sum = 0;
        int i,lnth;
        sum = 0;
        tmp = *(argv+1);
        lnth = strnlen(tmp);
        puts("got here 1");
        printf("*tmp is %s  \n",tmp);
        printf("lnth is %i  \n",lnth);
        puts("");
        for(i = 0;i < lnth;i++){
           tmpc = *(tmp++);
           if(tmpc == 'a' || tmpc == 'A' ){
               tmpn = 0xa;
           }
           else if(tmpc == 'b' || tmpc == 'B' ){
               tmpn = 0xb;
           }
           else if(tmpc == 'c' || tmpc == 'C' ){
               tmpn = 0xc;
           }
           else if(tmpc == 'd' || tmpc == 'D' ){
               tmpn = 0xd;
           }
           else if(tmpc == 'e' || tmpc == 'E' ){
               tmpn = 0xe;
           }
           else if(tmpc == 'f' || tmpc == 'F' ){
               tmpn = 0xf;
           }
/*           else if(tmpc != '0' || tmpc != '1' || tmpc != '2' || tmpc != '3' \
                   || tmpc != '4' || tmpc != '5' || tmpc != '6' || tmpc != '7' \
                   || tmpc != '8' || tmpc != '9' ){
               printf("Unallowed charactor entered \n");
               exit(1);
           }
*/
           else {
           tmpn = atoi(&tmpc);
           }
           printf("tmpn is %x  \n",tmpn);
           sum = sum + tmpn; 
        }
        printf("sum is %x \n",sum);
        return 0;
    }
}
