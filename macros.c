#include <stdio.h>
/*  Macro definitions  */
#define MAX(a,b) ((a) > (b) ? (a):(b))
#define MIN(a,b) ((a) < (b) ? (a):(b))
#define SQR(a) (a*a)

int main(){
    int x = 4;
    int y = 3;
    int tmp;
    printf("Y squared is %d\n",SQR(y));
    printf("which is greater - 3 or 4 ? %d \n",MAX(x,y));
    printf("which is less - 3 or 4 ? %d \n",MIN(x,y));
    return 0;
}





