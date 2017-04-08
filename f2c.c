#include<stdio.h>
/* get arguement from input in main */
int main(int argc, char *argv[])
{
/*int df, t;
*char selection;
*float dc;
*selection = atoi(argv[2]);
*t = atoi(argv[1]);
*printf("selection is %c\n",selection);
*if(selection == "f" || "F")
*	{
*	df = 9*t/5 +32;
*	printf("\n %i in degrees F is %f in degrees C \n",t,df);
*	}
*
*else if(selection == "c" || "C")
*{
*	dc = (t - 32)*5/9;
*	printf("\n %i in degrees F is %f in degrees C \n",t,dc);
*}
*else 
*printf("Nothihng entered\n");
*return (0);
*}
*/
int upper, lower,step;
float c;
printf("***************************************************\n");
printf("Temperature in degrees F - Temperature in degrees C\n");
printf("***************************************************\n");
lower = -100;
upper = 400;
step = 2;
while(upper > lower){
	c = (upper - 32)*5/9;
	printf("%d Farehhiet \t is \t %.2f Celcius\n",upper,c);
	upper = upper - step;
	}
}
