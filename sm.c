#include<stdio.h>
/* defines */
typedef struct {
    short int bit0:1;
    short int bit1:1;
    short int bit2:1;
    short int bit3:1;
    short int bit4:1;
    short int bit5:1;
    short int bit6:1;
    short int bit7:1;
    short int wrd0:8;
    } s_mword;

#define bit0 (1 << 0)
#define bit1 (1 << 1)
#define bit2 (1 << 2)
#define bit3 (1 << 3)
#define bit4 (1 << 4)
#define bit5 (1 << 5)
#define bit6 (1 << 6)
#define bit7 (1 << 7)

/* declare one pointer to functions */
int (*p)(int *temp);

int rp1(int *tmp);
int rp2(int *tmp);
int rp3(int *tmp);
int rp4(int *tmp);
void fucker(void);
void shiftmw(s_mword *tmp);


/*main*/
int main(int argc,int **argv){
    if(argc != 4){
        puts("usage = enter three numbers....");
        printf("fyi - the size of a short in is %x \n",sizeof(short int));
        exit(0);
    }
	int i;
    s_mword *mword;
	int *value;
    int state;
    state = atoi(*(argv +1));
    *value = atoi(*(argv +2));
    if(state % 2 != 0){
        state = 1;
    }
    else{
        state = 2;
    }
    mword = (s_mword *)*(argv+3);
    printf("mword is %x \n",mword->wrd0);
    shiftmw(mword);
    printf("mword is %x \n",mword->wrd0);
    

	fucker();
	printf("The value is now %x \n",value);
    
/* put out message indicating what needs to be put out */
	switch(state) {
		case 1:
			for(i = 0; i < 4;i++) {
				switch (i) {
                    case 0:
                        p = rp1;
				        printf("state 1 going up %d \n",p(value));
                    case 1:
                        p = rp2;
				        printf("state 1 going up %d \n",p(value));
                    case 2:
                        p = rp3;
				        printf("state 1 going up %d \n",p(value));
                    case 3:
                        p = rp4;
				        printf("state 1 going up %d \n",p(value));
                 default:
                        exit(0);
                 break;
			   }
            }
			break;
        case 2:
			for(i = 0; i < 4;i++) {
				switch (i) {
                    case 0:
                        p = rp4;
				        printf("state 2 going up %d \n",p(value));
                    case 1:
                        p = rp3;
				        printf("state 2 going up %d \n",p(value));
                    case 2:
                        p = rp2;
				        printf("state 2 going up %d \n",p(value));
                    case 3:
                        p = rp1;
				        printf("state 2 going up %d \n",p(value));
                 default:
                        exit(0);
                 break;
			}
			break;
		deafault:
            exit(0);
		break;
		}
    }
	return 0;
}


int rp1(int *tmp) {
	*tmp *= 2;
    puts(" func rp1 ");
	return *tmp;
}
 

int rp2(int *tmp) {
	*tmp *= 4;
    puts(" func rp2 ");
	return *tmp;
}

int rp3(int *tmp) {
	*tmp *= 8;
    puts(" func rp3 ");
	return *tmp;
}

int rp4(int *tmp) {
	*tmp *= 16;
    puts(" func rp4 ");
	return *tmp;
}



void fucker(){
	puts("work fucker");
}


 void shiftmw(s_mword *mtmp){
  puts("inside shiftmw()");
  short int i;
/*
 *   mtmp->bit0 = 0;
 *   mtmp->bit1 = 0;
 *   mtmp->bit2 = 0;
 *   mtmp->bit3 = 0;
 *   mtmp->bit4 = 0;
 *   mtmp->bit5 = 0;
 *   mtmp->bit6 = 0;
 *   mtmp->bit7 = 0; 
 */
   mtmp->wrd0 &= bit4;
   mtmp->wrd0 |= 0xFF;

  }

/*
 *   short int bit0:1;
 *   short int bit1:1;
 *   short int bit2:1;
 *   short int bit3:1;
 *   short int bit4:1;
 *   short int bit5:1;
 *   short int bit6:1;
 *   short int bit7:1;
 *   short int wrd0:8;
 */



