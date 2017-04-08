#include<stdio.h>
/* declare two  pointers to functions */
float (*pc2f)(float temp);
float (*pf2c)(float temp); 

float c2f(float temp);
float f2c(float temp);
/*main*/
int main()
{
	pc2f = c2f; /*Assign address of pc2f to point at function c2f */
	pf2c = f2c; /*Assign address of pf2c to point at function f2c */
	char type;
	float temp;
	/* put out message indicating what needs to be put out */
	printf("enter F or f if the temp entered is in farenhieght, else enter C or c if in celcius\n");
	scanf("%c",&type); /*get the current scale */
	printf("enter the temperature \n");
	scanf("%f",&temp);/*get the temprature*/
/*	if((type != 'f') || (type != 'F') ||(type != 'c') ||(type != 'C')){
		puts("that was not a c or a f - dumbass");
	} */
	switch(type) {
		case 'c': case 'C':
			printf("%.2f in Celcius is %.2f in Farenheight\n",temp,pc2f(temp));
			break;
		case 'f': case 'F':
			printf("%.2f in farenhieght is %.2f in celcius\n",temp,pf2c(temp));
			break;
		deafault:
			puts("that was not a c or a f - dumbass");
		break;
		}
	return 0;
}

float c2f(float temp)
{
	return (temp*9/5 + 32);
}


float f2c(float temp)
{
	return((temp -32)*5/9);
}
