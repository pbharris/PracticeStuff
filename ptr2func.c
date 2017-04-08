#include<stdio.h> 
#include<string.h>
#include"ptr2func.h"
/* 1st - print out un parsed strings 
 * 2nd - prints out con catenated strings
 * 3rd - if number is larger than 10 then swap strings, if number is less than
 *       10 don't swap
 * 4th - print out stuff
 */
int main(int argc, char **argv){
    char *word1;
    char *word2;
    char *word3;
    int *num3;
    int inum3;
    pswapstr = swapstr;
    pprtstr = prtstr;
    pcatstr = catstr;
    pmessage = message;

    word3 = malloc(100*sizeof(char));
    if(argc != 4){
        puts("usage = two strings to compare....");
        exit(0);
    }
    word1 = *(argv+1);
    word2 = *(argv+2);
    num3 = atoi(*(argv+3));
    inum3 = num3;
    puts("got here 1");
    /* Lets make sure data is okay...  */
    /* printf("word one is a ponter to %s \n",word1); */
    /* printf("word two is a ponter to %s \n",word2); */
    printf("Third arg is number  %d \n",num3);
    printf("inum3 is %d \n",inum3);
    puts("got here 2");
    /*-----------------------------------------------------------------------*/
    switch (inum3){
        case 10:
            puts("number is 10");
            pswapstr(word1,word2);
            printf("concatentated words are %s \n",word3);
            puts("************ case 10 *****************");
            break;
        case 20:
            puts("number is 20");
            pswapstr(word1,word2);
            word3 = pcatstr(word1,word2);
            puts("************ case 20 *****************");
            break;
        case 30:
            puts("number is 30");
            word3 = pcatstr(word1,word2);
            printf("concatentated words are %s \n",word3);
            pprtstr(word1,word2);
            pswapstr(word1,word2);
            puts("************ case 30 *****************");
            break;
       default:
            pmessage();
            break;
    }
    return(0);
}


