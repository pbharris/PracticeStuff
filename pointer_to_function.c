#include<stdio.h>
double addIt(int a,int b);
double subIt(int a,int b);
double mulTit(int a,int b);
double divIt(int a,int b);


double (*ptrAddIt)(int a,int b);
double (*ptrSubIt)(int a,int b);
double (*ptrMulTit)(int a,int b);
double (*ptrDivIt)(int a,int b);


int main(int argc, int **argv){

    int x,y;

    if (argc != 3 ){
        puts("usage: enter two numbers ");
    exit(0);
    }

    x = atoi(*(argv++));
    y = atoi(*(argv++));
    printf("Sum is %d \n", addit(y,x));

}

double addit(int a,int b){
    return a+b;
}


double subit(int a,int b){
    return a - b;
}


double multit(int a,int b){
    return a*b;
}



double divit(int a,int b){
    return a/b;
}

