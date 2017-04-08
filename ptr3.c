#include<stdio.h>
#ifndef XOR
#define XOR(x,y) (((x)&(~y)) | (~(x)&(y)))
#endif
/*
	    x&~y | ~x&y
*/
typedef unsigned int uint8;

/* practice making a pointer - and shifting its contents */
main()
{
    /* Define yum and declare a varible called bar to yum which is comprised of eight one bit values */
    struct yum {
	uint8 b0 : 1;
	uint8 b1 : 1;
	uint8 b2 : 1;
	uint8 b3 : 1;
	uint8 b4 : 1;
	uint8 b567 : 3;
    }bar;
    unsigned int cat,*dog;

    bar.b0 = 0x01;
    bar.b1 = 0x00;
    bar.b2 = 0x01;
    bar.b3 = 0x00;
    bar.b4 = 0x00;
    bar.b567 = 0x07;

    printf("the value of bar.b567 is %0x \n",bar.b567);    
    printf("the size of the structure yum  %0x \n",sizeof(bar));
    printf("the size of the unsigned int dog is %0x \n",sizeof(*dog));
    printf("the value of the unsigned int pointer dog is %0x \n",*dog);
    printf("the value of the unsigned int cat is %0x \n",cat);

    cat = *dog;
    printf("the value of the unsigned int cat is now %0x \n",cat);
    cat = cat << 5;
    printf("the value of the unsigned int cat is %0x after shifting 5 bits to left\n",cat);
    cat = cat^cat;
    printf("the value of the unsigned int cat is %0x after xoring with self is\n",cat);
    puts("Now xor cat with 0x19 '#define XOR(x,y) ((x)&(~(y) | (~(x))&((y)))'");
    cat = XOR(cat,0x19);
    printf("\t %0x \n",cat);
    printf("now times 4 - %0x after left shifting self - i.e. cat = cat << 2 is\n",(cat=cat<<2));
    printf("now that times 1 - %0x after left shifting self - i.e. cat = cat << 1 is\n",(cat=cat<<1));


} 
