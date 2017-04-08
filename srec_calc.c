#include<stdio.h>
#include<string.h>
/*  argc - number of arguments
 *  argv[] - argument1, argument2, etc....
 *  to access indivual elements of argv do this:
 *  <whatever> = **(argv+i) where 'i' is the element to be accessed.
 */
#define UINT8 unsigned char
int chksum(int sum);
int two_comp(int sum);
int main(int argc, char *argv[]){
    if (argc != 2){
        puts("usage: enter line to have srec chksum to be calculated....");
    }
    else{
        char *tmp;
        char *sline;
        int cksum;
        int i;
        cksum = 0;
        tmp = *(argv+1);
        puts("got here 1");
        printf("*tmp is %s  \n",tmp);
        for(i = 0;i < strlen(tmp);++i){
            cksum += *(tmp+i);
        }
        cksum = chksum(cksum);
        if(cksum < 0xF){
            printf("Checksum is less than 0xF and is %x \n",cksum);
            printf("entire line is S325%s0%x\n",tmp,cksum);
        }
        else {
            printf("Checksum is more than 0xF and is %x \n",cksum);
            printf("entire line is S325%s%x\n",tmp,cksum);
        }
    }
}

int chksum(int sum){
    unsigned int cksum;
    cksum = sum & 0xFF;
    cksum = ~cksum;
    cksum++;
    cksum = cksum & 0xFF;
    return cksum;
    }
