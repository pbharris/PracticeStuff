#include<stdio.h>
int main(int argc, char *argv[])
{
   int num;
   int count = 0;
   num =  atoi(argv[1]);
   while(num > 1)
   {
       --num;
       count = num + count;
   }
   printf("Total number of upgrade paths are %d\n",count);
   return(0);
}
