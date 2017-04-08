#include<stdio.h>
/* Pointer implementation of the FIFO */
typedef UINT8 unsigned char;

#define FifoSize 15 /* Number of 8 bit data in the Fifo */

char *PUTPT;    /* Pointer of where to put next */
char *GETPT;    /* Pointer of where to get next */

/* FIFO is empty if PUTPT=GETPT */
/* FIFO is full if PUTPT+1=GETPT */

void InitFifo(void);
int PutFifo (char data); 
int GetFifo (char *datapt);



char Fifo[FifoSize]; /* The statically allocated fifo data */

int main(void){
    int put_err, get_err;
    char a,b,c,d,e,f,g,h,i,j,k;
    char *ret_char;
    ret_char = (char *)malloc(sizeof(char));
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
    InitFifo();
    if (PutFifo(a)) {
        puts ("var a is in");
    } 
    if (PutFifo(b)) {
        puts ("var b is in");
    }
    if (PutFifo(c)) {
        puts ("var c is in");
    }
    if (PutFifo(d)) {
        puts ("var d is in");
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if (PutFifo(e)) {
        puts ("var e is in");
    }
    if (PutFifo(f)) {
        puts ("var f is in");
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if (PutFifo(g)) {
        puts ("var g is in");
    }
    if (PutFifo(h)) {
        puts ("var h is in");
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    a = 'g';
    if (PutFifo(a)) {
        puts ("var h is in");
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
    if(GetFifo(ret_char)){
        printf("got ret_chat and it is %c \n",*ret_char);
    }
}


void InitFifo(void) {
    unsigned char SaveSP;
    PUTPT=GETPT=&Fifo[0]; /* Empty when PUTPT=GETPT */
}

int PutFifo (char data) { 
    char *Ppt; /* Temporary put pointer */
    unsigned char SaveSP;
    Ppt=PUTPT; /* Copy of put pointer */
    *(Ppt++)=data; /* Try to put data into fifo */
    if (Ppt == &Fifo[FifoSize]) Ppt = &Fifo[0]; /* Wrap */
    if (Ppt == GETPT ){
        return(0);
    }   /* Failed, fifo was full */
    else{
        PUTPT=Ppt;
        return(-1);   /* Successful */
    }
}


int GetFifo (char *datapt) {
    unsigned char SaveSP;
    if (PUTPT== GETPT){
        puts("buffer is empty");
        return(0);
    }   /* Empty if PUTPT=GETPT */
    else{
        *datapt=*(GETPT++);
        if (GETPT == &Fifo[FifoSize]){
            GETPT = &Fifo[0];
        }
        return(-1);
    }
}
