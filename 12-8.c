#include<stdio.h>
void print_function(char star);
int ctr;
int main(void){
    char star;
    print_function(star);
    return 0;
}

void print_function(char star){
    char dash;
    for(ctr = 0;ctr<25;ctr++){
        printf("%c%c",star,dash);
    }
}

