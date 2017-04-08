
void message(void);
void swapstr(char *w1, char *w2);
void prtstr(char *w1, char *w2);
char * catstr(char *w1, char *w2);

void (*pswapstr)(char *w1, char *w2) = NULL;
void (*pprtstr)(char *w1, char *w2) = NULL ;
char * (*pcatstr)(char *w1, char *w2) = NULL;
void (*pmessage)(void) = NULL;

void swapstr(char *w1, char *w2){
    char *tmpword;
    tmpword = w1;
    w1 = w2;
    w2 = tmpword;
}

void prtstr(char *w1, char *w2){
    printf("string 1 is %s and string two is %s \n",w1, w2);
}

char * catstr(char *w1, char *w2){
    char *catstr1;
    int strlen1;
    printf("inside catstr word one is %s \n",w1);
    printf("inside catstr word two is %s \n",w2);
    strlen1 = strlen(w1);
    catstr1 = w1;
    *(catstr1 + strlen1) = *w2;
    return(catstr1);
}

void message(void){
    puts("work fucker");
    puts("default message");
}
