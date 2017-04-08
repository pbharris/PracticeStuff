#include<stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    double result,Xa,Xb,Xc,Ya,Yb;
    if(argc != 6 ){
        puts("enter info to interpolated in the following format");
        puts("following cartisain coordiates method ");
        puts("Xa, Xb, Ya, Yb and Xc");
        puts("Where Xa and Xb are along X axis, Ya and Yb are along Y axis");
        puts("and we are determinging Yc");
        exit(0);
    }
    argv++;
    Xa = atof(*(argv++));
    Xb = atof(*(argv++));
    Ya = atof(*(argv++));
    Yb = atof(*(argv++));
    Xc = atof(*(argv++));
    printf("nums are %.2f %.2f %.2f %.2f %.2f \n",Xa, Xb, Ya, Yb, Xc);

    result = Ya + (Xc - Xa)*(Yb - Ya)/(Xb - Xa);
    /*printf("interpolated result is %05d \n",result); */
    printf("interpolated result is %.2f \n",result);
    return(0);
}

