#include<stdio.h>
/*  argc - number of arguments
 *  argv[] - argument1, argument2, etc....
 */
#define BIT0 (1 << 0)
#define BIT1 (1 << 1)
#define BIT2 (1 << 2)
#define BIT3 (1 << 3)
#define BIT4 (1 << 4)
#define BIT5 (1 << 5)
#define BIT6 (1 << 6)
#define BIT7 (1 << 7)
void foo(void);

int main(int argc, char **argv){
    int *tmp1;
    printf("argc is %d \n",argc);
    if(argc != 2){
        puts("usage = something....");
    }
    foo();
    tmp1 = atoi(*(argv +1));
    printf("num is %x \n",tmp1);
    tmp1 &= ~BIT3;
    printf("num is %x after bit 3 is cleared \n",tmp1);
    tmp1 |= BIT7;
    printf("num is %x after bit 7 is set\n",tmp1);




}



void foo(void){
    int x,tmp;
    unsigned int y;
    x = -20;
    y = 6;
    tmp = x+y;
    printf("%d \n",tmp);
    (x+y <  6) ? puts("<6") : puts("=> 6");
}
