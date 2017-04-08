#include <stdio.h>
float factorial(int f);
int count(int x);

int main(){
    int n = 7;
    int x,y;
    count(n);
    printf ("%i\n",n);
    puts("enter number that needs to know factorila value");
    scanf("%d",&x);
    y = factorial(x);
    printf("%d factorial is %0.0f\n ",x,y);

    return(0);
}

int count(int x) {
    int y;
    printf ("before y gets set it is %i\n",y);
    for (y = 0; y < x; y++) {
        count(y);
        printf ("Y is %i\n",y);
        puts("in count");
    }
    return(y);
}

float factorial(int f){
    if (f == 1){
        return 1;
    }
    else{
        f = f*factorial(f-1);
    }
    return (float)f;
}
