#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

#include "linkedlist.h"
typedef struct {
    char *name;
    int  age;
    char *initial;
    struct LLIST *next;
}LLIST;

void pie(void);

int main()
{
    LLIST *list1,*list2;

    list1 = ( LLIST* )malloc(sizeof(LLIST));
    list2 = ( LLIST* )malloc(sizeof(LLIST));
    if ((list1 || list2) == NULL){
        puts("error getting memory");
        exit(1);
    }

    printf("The size of an int is %x \n",sizeof(int));
    printf("The size of an unsigned int is %x \n",sizeof(unsigned int));
    list1->name = "dasdasdasdasd";
    /*  list1->name = "ray harris"; */
    list1->age = 31;
    list1->initial = "h";
    list1->next = NULL;
    /*list1->initial = "rh"; */
    list2->name = "BigFat Fool";
    list2->age = 50;
    list2->initial = "q";
    list2->next = NULL;
    pie();
    printf("The 1st name %s is \n",list1->name); 
    printf(" is %d and\n",list1->age); 
    printf("The initial is %s\n",list1->initial); 

    printf("The 2nd name %s is \n",list2->name); 
    printf(" is %d and\n",list2->age); 
    printf("The initial is %s\n",list2->initial); 

    printf("The size of list is %x bytes (thats %d is decimal) \n",sizeof(LLIST),sizeof(LLIST));
    free(list1);
    free(list2);
    return 0;
}
 
void pie(void){
    puts("damn it");
}
