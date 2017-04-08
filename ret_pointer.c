#include<stdio.h>
int *value;
char * ret_string(char *str);
int main(int argc, char **argv){
    int *crap;
    char *string;
    if ((argc != 2)  ){
    puts("usage: enter a string\n");
    return(-1) ;
    }
    string = ret_string(*(++argv));
    printf("the items entered is %s \n",string);
    return(0);
}

char * ret_string(char *str){
    char **string;
    string = malloc(1000*sizeof(char));
    if (string == NULL) {
        _exit(0);
    }

    while(*str != '\0'){
        *string++ = *str;
        *str++;
    }
    return string;
}
