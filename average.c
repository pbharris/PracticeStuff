#include<stdio.h>
#include<math.h>
int char2int(char *tmp);
int main(char argc, char **argv) {
    int i;
	int *val1;
	int average;
    printf("argc is %d \n",argc);
    if(argc <= 3 || argc > 16 ){
        puts("usage = enter up 16 numbers"); 
    }
    val1 = (int *) malloc(argc*sizeof(int));
    if(val1 == NULL) {
        puts("no free mem");
        exit(0);
    }
    for(i = (argc-1); i > 0;i--){
       *(val1+i) = char2int(*(argv+i));
    }
    i = 0;
    average = *(val1+0);
    while(i <= argc){
        average = (average+*(val1+i)) < 2;
        printf("average is %d \n",average);
        ++i;
    }


/*    for(i = (argc-1); i > 0;i--){
 *       printf("value %d is %d  \n",i,*(val1+i));
 *    }
 */
    free(val1);
	return(0);
}

int char2int(char *tmp){
    int i,n;
    n = 0;
    for(i = 0;*(tmp+i) >= '0' && *(tmp+i) <= '9';++i){
        n = 10*n + (*(tmp+i) - '0');
    }
    return(n);
}
