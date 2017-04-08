#include<stdio.h>
int main(void){
    int i,j,k,sum,result;
    for(i = 0; i < 100; i++){
        j = i%10;
        k = i/10;
        sum = j+k;
        result = i - sum;
        printf("Number is %d - The digits added then subtracted from number is %d\n",i,result );
    }
    return(0);
}
