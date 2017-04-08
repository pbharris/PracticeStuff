#include<stdio.h>
#include <curses.h>

void clear_kb(void);

int main(){
    FILE *fp;
    float data[5];
    int count;
    char filename[20];
    puts("enter 5 nums ");
    for(count = 0;count <5;count++){
        scanf("%f",&data[count]);
    }
    clear_kb();
    puts("enter a file name");
    gets(filename);
    if((fp = fopen(filename,"w"))== NULL){
        fprintf(stderr,"error opening %s ",filename);
        exit(1);
    }
    /* write data to file and stdout */
    for(count = 0;count<5;count++){
        fprintf(fp,"\n data[%d] = %f",count, data[count]);
        fprintf(stdout,"\n data[%d] = %f",count, data[count]);
    }
    fclose(fp);
}

void clear_kb(void){
    char junk[80];
    gets(junk);
}



