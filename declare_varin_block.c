#include<stdio.h>
int main(){
    int i;
    for(i=0;i<10;i++){
        int j=5;
        if(j>i){
            printf("j is larger than i - %i \n",j);
        }
    }
}
