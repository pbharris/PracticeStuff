#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>


int main(int argc, char **argv){
    double r1,r2,i,a,b,c;
    if(argc != 4 ){
        puts("Calculates root of equation given quadratic equation");
        puts("Where ax^2 + bx + c = 0 ");
        puts("user needs to enter value for 'a' 'b' and 'c'user needs to enter value for 'a' 'b' and 'c' . ");
        puts("Return value is the two possible answers.");
        exit(0);
    }
    argv++;
    a = atof(*(argv++));
    b = atof(*(argv++));
    c = atof(*(argv++));
    if((b*b - 4*a*c) < 0){
        double r1i,r2i;
        i = sqrt(abs(b*b - 4*a*c));
        r1 = (-b)/(2*a);
        r2 = (-b)/(2*a);
        r1i = (+i)/(2*a);
        r2i = (-i)/(2*a);
        printf("results are %0.0f,%0.0fi and %0.0f,%0.0fi \n",r1,r1i,r2,r2i );

    }
    else{
       i = sqrt(b*b - 4*a*c);
       r1 = (-b+i)/(2*a);
       r2 = (-b-i)/(2*a);
       printf("results are %0.0f and %0.0f \n",r1,r2);
    }
    return(0);
}

