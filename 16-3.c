#include<stdio.h>
int main(){
    float f1,f2,f3,f4,f5;
    FILE *fp;
    if((fp = fopen("input.txt","r"))== NULL){
        fprintf(stderr,"error opening file \n ");
        exit(1);
    }
    fscanf(fp,"%f, %f, %f,%f,%f",&f1,&f2,&f3,&f4,&f5);
    printf("the values are %f %f %f %f and %f ",f1,f2,f3,f4,f5);
    fclose(fp);
    return 0;
}
