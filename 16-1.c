#include<stdio.h>
#include <curses.h>

int main(){
    FILE *fp;
    char ch,filename[40],mode[4];
    while(1){
        puts("enter a file name ");
        gets(filename);
        puts("enter a mode - max 3 chars");
        gets(mode);
        if((fp=fopen(filename,mode) != NULL)){
            printf("\n Successful at opening %s in mode %s \n",filename,mode);
            puts("gots here 1");
            fclose(fp);
            puts("enter x to exit, or any otehr to continue");
            if((ch = getch()) == 'x'){
                break;
            }
            else
                continue;
        }
        else{
            fprintf(stderr, "\n error opening file");
            puts("enter x to exit, or any otehr to continue");
            if((ch = getch()) == 'x'){
                break;
            }
            else
                continue;
        }
    }
}
