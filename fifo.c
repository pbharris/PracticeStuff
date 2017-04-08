#include<stdio.h>
typedef unsigned char UINT8;

#define FIFOSIZE 15 /* Number of 8 bit data in the Fifo */
#define FAIL 0 
#define PASS 1 


UINT8 *put_ptr;    /* Pointer of where to put next item */
UINT8 *get_ptr;    /* Pointer of where to get next item*/

/* FIFO is empty if put_ptr=get_ptr */
/* FIFO is full if put_ptr+1=get_ptr */

void initFifo(void);
int putFifo (UINT8 data); 
int getFifo (UINT8 *data_ptr);

UINT8 fifo[FIFOSIZE]; /* The statically allocated fifo data */

int main(void){
    int put_err, get_err;
    UINT8 a,b,c,d,e,f,g,h,i,j,k;
    UINT8 *popped_data;
    /* Yes - I have to request memory for a single byte */
    popped_data = (UINT8 *)malloc(sizeof(UINT8));
    a = 0x10;
    b = 0x11;
    c = 0x12;
    d = 0x13;
    e = 0x14;
    f = 0x15;
    g = 0x16;
    h = 0x17;
    i = 0x19;
    j = 0x20;
    k = 0x21;
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
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if (putFifo(e)) {
        puts ("var e is in");
    }
    if (putFifo(f)) {
        puts ("var f is in");
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if (putFifo(g)) {
        puts ("var g is in");
    }
    if (putFifo(h)) {
        puts ("var h is in");
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    a = 'g';
    if (putFifo(a)) {
        puts ("var h is in");
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    if(getFifo(popped_data)){
        printf("got ret_chat and it is %x \n",*popped_data);
    }
    free(popped_data);
}

/* initFifo:  Initialize Fifo buffer - set put and get pointers adresss's 
 * to start or buffer
 */
void initFifo(void) {
    put_ptr=get_ptr=&fifo[0]; /* Empty when put_ptr=get_ptr */
}

/* putFifo: puts data into the next position on in the buffer.
 * If successful returns pass, if not (buffer is full) returns fail.
 */
int putFifo (UINT8 data) { 
    UINT8 *tmp_put_ptr; /* Temporary put pointer */
    tmp_put_ptr=put_ptr; /* Copy of put pointer */
    *(tmp_put_ptr++)=data; /* Try to put data into fifo */
    /* Wrap back to start of fifo array if the address of put_ptr is the same 
     * as the end of the array */
    if (tmp_put_ptr == &fifo[FIFOSIZE]){
        tmp_put_ptr = &fifo[0];     
    }
    if (tmp_put_ptr == get_ptr ){
        return(FAIL);
    }   /* Failed, fifo was full */
    else{
        put_ptr=tmp_put_ptr;
        return(PASS);   /* Successful */
    }
}

/* getFifo:  pass in a pointer (data_ptr) to a UINT8 to store the value to be
 * popped off fifo stack.  If successful will copy contents of what next value
 * to passed in address and return success,  if not successful or if buffer is 
 * empty will return FAIL
 */

int getFifo(UINT8 *data_ptr){
    if (put_ptr == get_ptr){
        puts("buffer is empty");
        return(FAIL);
    }   /* Empty if put_ptr=get_ptr */
    else{
        *data_ptr = *(get_ptr++);
        if (get_ptr == &fifo[FIFOSIZE]){
            get_ptr = &fifo[0];
        }
        return(PASS);
    }
}
