#include<stdio.h>
int main(){
	printf("size of a unsigned char is %d \n",sizeof(unsigned char));
	printf("size of a unsigned int is %d \n",sizeof(int));
	printf("size of a signed char is %d \n",sizeof(unsigned char));
	printf("size of a signed int is %d \n",sizeof(char));
	printf("size of a unsigned long is %d \n",sizeof(unsigned long));
	printf("size of a unsigned char is %d \n",sizeof(unsigned char));
	printf("size of a unsigned char is %d \n",sizeof(unsigned char));
	printf("size of a unsigned float is %d \n",sizeof(float));
	unsigned int *var;
	unsigned int *ivar;
        unsigned long *lvar;
	unsigned char *cvar;
	var = malloc(sizeof(int));
	*var = 1;
	var++;

	printf("the address of var is 0x%x \n",&var);

	++var;

	printf("the address of var is 0x%x \n",&var);

	printf("this is a %d bit machine \n",sizeof(int)*8);
	return 0;
}
