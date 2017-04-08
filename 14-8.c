#include<stdio.h>
#define MAXLEN 100
int main(){
    char buffer[MAXLEN];
    puts("enter text a line at a time - blank to exit");
    while(1){
        fgets(buffer,MAXLEN,stdin);
        if(buffer[0] == '\n'){
            break;
        }
        puts(buffer);
    }
    return 0;
}

