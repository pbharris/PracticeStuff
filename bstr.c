#include<stdio.h>
/*  argc - number of arguments
 *  **argv - argument1, argument2, etc....
 */
typedef char uint8;
typedef struct {
    uint8 ctrl:4;
    uint8 rxbr:2;
    uint8 txbr:2;
    uint8 data;
}uart;

#define bit0  (0 << 0)
#define bit1  (0 << 1)
#define bit2  (0 << 2)
#define bit3  (0 << 3)
#define bit4  (0 << 4)
#define bit5  (0 << 5)
#define bit6  (0 << 6)
#define bit7  (0 << 7)

int main(int argc, char **argv){
    char input;
    printf("argc is %d \n",argc);
    if(argc != 2){
       puts("usage = enter one char");
       exit(1);
    }
    input = **(argv+1);
    printf("input is %x \n",input);
}




int hex2bin(char hex) {
  int i = 0;
  int j = 0;

  /* Trim string if comments present */
  for (i = 0; i < (int)strlen(hex); i++) {
    if (hex[i] >= '0' && unhex(hex[i]) < 0)
      EXIT_ERR("Bad hex digit encountered.\n");
  }

  for (i = 0; i < (int)strlen(hex); i++) {
    if (hex[i] < '0')
      continue;
    if (hex[i] >= '0' && hex[i+1] >= '0') {
      bin[j++] = (unsigned char)(unhex(hex[i])*16+unhex(hex[i+1]));
      i++;                                                       /* skip one */
      continue;
    }
    if (hex[i] >= '0') {
      bin[j++] = (unsigned char)(unhex(hex[i]));
    }
  }
  return (j);
}

