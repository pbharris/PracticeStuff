/* A packed structure */
#include<stdio.h>
/* A packed structure */
struct P {
		short s[3];
		long l;
		char str[5];
}__attribute__ ((packed));
/* An  unpacked structure */
struct UP {
		short s[3];
		long l;
		char str[5];
};
/*main*/
int main(void)
{
	struct P packed;
	struct UP unpacked;
	/*print size of each for comparasion */
	fprintf(stdout, "sizeof char str[5] = %d bytes\n",sizeof(char)*5);
	fprintf(stdout, "       sizeof long = %d bytes\n",sizeof(long));
	fprintf(stdout, " sizeof short s[5] = %d bytes\n",sizeof(short)*3);
/* print the size of each structure */	
	fprintf(stdout, "     sizeof packed = %d bytes\n",sizeof(packed));
	fprintf(stdout, "   sizeof unpacked = %d bytes\n",sizeof unpacked);	

	return 0;
}
