#include<stdio.h>
/* Get list from command line and put in a structure.*/

void store_data(int size, char **input);

typedef struct {
    char *fname;
    char *lname;
    char *age;
    struct llist *elist;
}llist;

int main(int argc, char **argv){
    printf("argc is %d \n",argc);
    if(argc != 7){
        puts("enter two sets of data,  name name age name name age....");
        exit(0);
    }
    store_data(argc,argv);

}

/* This takes data from command line and stores it in the linked list */
void store_data(int size,char **input){
    llist **pp;
    llist *pinfo;
    int i = 0;
    pp = (llist * )malloc(10*sizeof(llist));
    pinfo = pp;
    puts("g h 1"); 
    while(i < 10){
        pinfo->fname = *(input+(3*i-2));
        pinfo->lname = *(input+(3*i-1));
        pinfo->age = atoi(*(input+(3*i)));
        pinfo->elist = ++pinfo;
        puts("g h 2"); 
        printf("pinfo %s %s %i \n",pinfo->fname,pinfo->lname,pinfo->age);
        ++i;
        if(pinfo->fname == '\0'){
            puts("done");
            break;
        }
    }
    /* free(pinfo); */
}

/*    for(i = 1; i < size; i=+3){
 *        *((pinfo + i)->fname) = *(input + i);
 *        *((pinfo + i+1)->lname) = *(input + i+1);
 *        *((pinfo + i+2)->age) = *(input + i+2);
 *        *(pinfo->elist) = 
 *
 */
