#include<stdio.h>
/* Pointer implementation of the FIFO */
typedef unsigned char UINT8;

#define FifoSize 15 /* Number of 8 bit data in the Fifo */
#define FAIL 0 
#define PASS 1 


UINT8 *PUTPT;    /* Pointer of where to put next */
UINT8 *GETPT;    /* Pointer of where to get next */

/* FIFO is empty if PUTPT=GETPT */
/* FIFO is full if PUTPT+1=GETPT */

void initFifo(void);
int putFifo (UINT8 data); 
int getFifo (UINT8 *datapt);



UINT8 Fifo[FifoSize]; /* The statically allocated fifo data */

int main(void){
    int put_err, get_err;
    UINT8 a,b,c,d,e,f,g,h,i,j,k;
    UINT8 *getptr;
    getptr = (UINT8 *)malloc(sizeof(UINT8));
    a = 'z';
    b = 'y';
    c = 'x';
    d = 'w';
    e = 'v';
    f = 'u';
    g = 't';
    h = 's';
    i = 'r';
    j = 'q';
    k = 'p';
    put_err = get_err = 0;
    initFifo();
    if (putFifo(a)) {
        puts ("var a is in");
    } 
    if (putFifo(b)) {
        puts ("var b is in");
    }
    if (putFifo(c)) {
        puts ("var c is in");
    }
    if (putFifo(d)) {
        puts ("var d is in");
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if (putFifo(e)) {
        puts ("var e is in");
    }
    if (putFifo(f)) {
        puts ("var f is in");
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if (putFifo(g)) {
        puts ("var g is in");
    }
    if (putFifo(h)) {
        puts ("var h is in");
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    a = 'g';
    if (putFifo(a)) {
        puts ("var h is in");
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    if(getFifo(getptr)){
        printf("got ret_chat and it is %c \n",*getptr);
    }
    free(getptr);
}


void initFifo(void) {
    UINT8 SaveSP;
    PUTPT=GETPT=&Fifo[0]; /* Empty when PUTPT=GETPT */
}

int putFifo (UINT8 data) { 
    UINT8 *Ppt; /* Temporary put pointer */
    UINT8 SaveSP;
    Ppt=PUTPT; /* Copy of put pointer */
    *(Ppt++)=data; /* Try to put data into fifo */
    if (Ppt == &Fifo[FifoSize]) Ppt = &Fifo[0]; /* Wrap */
    if (Ppt == GETPT ){
        return(FAIL);
    }   /* Failed, fifo was full */
    else{
        PUTPT=Ppt;
        return(SUCCESS);   /* Successful */
    }
}

/* getFifo:  pass in a pointer to a UINT8 to store the value to be popped off
 * fifo stack.  If successful will copy contents of what next value to passed
 * in address and return success,  if not successful or if buffer is empty 
 * will return FAIL
 */

int getFifo (UINT8 *datapt) {
    UINT8 SaveSP;
    if (PUTPT== GETPT){
        puts("buffer is empty");
        return(FAIL);
    }   /* Empty if PUTPT=GETPT */
    else{
        *datapt=*(GETPT++);
        if (GETPT == &Fifo[FifoSize]){
            GETPT = &Fifo[0];
        }
        return(SUCCESS);
    }
}
