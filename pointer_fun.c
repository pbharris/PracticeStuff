#include<stdio.h>
void swap(int *px, int *py);
void message(void);
int main(int argc, char **argv){
    int *a,*b;
    int x = 1, y = 2, z[10]; 
    int *ip; /* *ip is a pointer to int */
    /* sets address of 'a' and 'b' to a known mem location that is ready */
    a = malloc(sizeof(int)); 
    b = malloc(sizeof(int));
    *a = 32;
    *b = 17;
    ip = &x; /* ip now points to x */
    y = *ip; /* y is now equal to x, i.e. 1 */
    *ip = 0; /* x is now equal to 0 */
    ip = &z[0]; /* ip now has same location as z[] */
    *ip += 1; /* increments what ip is pointing at */
    ++*ip; /* pre-increments what ip is pointing at */
    (*ip)++; /* post-increments what ip is pointing at */
    printf("a and b are %d and %d respectively \n",*a,*b);
    swap(a,b);
    message();
    printf("after swaping a and b are now %d and %d respectively \n",*a,*b);
    return 0;
}
/* declares a function that prints a message, note 
 * that the pointer,  not the pointer contents gets passed in
 */
void message(void){
    char * phrase;
    phrase = (char *)malloc(100*sizeof(char));
    *phrase = "This is a test\n";
    printf("print a phrase %s \n ",phrase);
    free(phrase);
    return;
}



void swap(int *px, int *py){
 int tmp;   
 tmp = *px; 
 *px = *py; 
 *py = tmp;  

    /* This triple XOR will swap memory bitwise with no tmp memory.  */
/*    *px = *px^*py;
    *py = *py^*px;
    *px = *py^*px; */
}
