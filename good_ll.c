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
    llist *pinfo, *qinfo;
    puts("g h 1"); 
    pinfo = (llist * )malloc(3*sizeof(llist));
    pinfo->fname = *(input+1);
    pinfo->lname = *(input+2);
    pinfo->age = atoi(*(input+3));
    puts("g h 2"); 

    qinfo->elist = pinfo;
    qinfo->fname = *(input+4);
    qinfo->lname = *(input+5);
    qinfo->age = atoi(*(input+6));
    puts("g h 3"); 

    printf("pinfo %s %s %i \n",pinfo->fname,pinfo->lname,pinfo->age);
    printf("qinfo %s %s %i \n",qinfo->fname,qinfo->lname,qinfo->age);

    free(pinfo);
}

/*    for(i = 1; i < size; i=+3){
 *        *((pinfo + i)->fname) = *(input + i);
 *        *((pinfo + i+1)->lname) = *(input + i+1);
 *        *((pinfo + i+2)->age) = *(input + i+2);
 *        *(pinfo->elist) = 
 *
 */
