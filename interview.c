#include<stdio.h>
/*  argc - number of arguments
 *  argv[] - argument1, argument2, etc....
 */
/* This sort list - hopefully quickly*/
void waste_time(void);
int main(int argc, char *argv[]){
    int num_of_args;
    int i;
    char *list[10];
    *list = (char *)malloc(2560*sizeof(char));
    num_of_args = argc-1;
    if(argc < 2){
        puts("usage = something.... up to ten ");
    } 
    while ( num_of_args > 0 ){                  
        --num_of_args;
        *list[num_of_args] = *argv[num_of_args];
        printf("%s \n",list[num_of_args]);
    }
    return(0);
    
}
void waste_time(void){
    unsigned long tmp = 0xFFFFF;
    while(tmp != 0){
        --tmp;
    }
}
