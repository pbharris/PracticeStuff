#include<stdio.h>
char grid[12][12];
char (*pgrid)[12];
/*pgrid = grid;*/
main()
{
	int i,j,k;
	for(i = 0;i< 12;i+2)
	{
		for(j=0;j<12;j+2)
		{
			grid[i][j] = "X";
		}
	}
	for(k=0;k<144;k++)
	{
		if(k%12 == 0)
			printf("\n");
		else
			printf("%c",*pgrid++);
	}
}
