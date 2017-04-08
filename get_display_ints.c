#include<stdio.h>
#define ASIZE 10
void sort_array(int array[]);
int main(void){
    int input[ASIZE];
    int i,j;
    puts("enter some numbers...");
    for(i = 0;i<ASIZE;i++){
        scanf("%d",&input[i]);
        if(input[i] == 0){
            j=i;
            break;
        }
    }
    sort_array(input);
    i = 0;
    while(i < j ){
        printf("array[%d] is %d \n",i,input[i]);
        ++i;
    }
}

void sort_array(int array[]){ 
    int tmp = 0;                   
    int i,j;                         
    for(i = 0;i<ASIZE;i++){        
        for(j=0;j<ASIZE;j++){
            if(array[j] > array[i]){ 
                tmp = array[j];        
                array[j] = array[i]; 
                array[i] = tmp;      
            }
        }
    }
}

