#include<stdio.h>
/* void ps_list_print(void); */
/* void nlist_print(void); */
/*  Makes a data type called s_list */
typedef struct {
    char *name;
    char *city;
    int age;
}s_list;

void s_list_print(void);
/**********************************************/
int main(int argc, char **argv){
    s_list *list1;
    char *w1,*w2;

    if (((argc -1) % 3 != 0) || argc < 2 ){
    puts("usage: enter at  least three fields - in the order of name,  city and age,");
    exit(0);
    }
    list1 = *argv;
    list1->name = *(argv+1);
    list1->city = *(argv+2);
    list1->age = atoi(*(argv+3));
    printf("* argv 1 is %s \n",*(argv+1));
    printf("* argv 2 is %s \n",*(argv+2));
    printf("* argv 3 is %i \n",*(argv+3));
/*
    printf("passed in name is %s \n",list1->name);
    printf("passed in city is %s \n",list1->city);
    printf("passed in age is %d \n",list1->age);
*/

    /* prints out */
    puts("");
    s_list_print();
    puts("");
    return 0;
}



void s_list_print(void){
    /* make a pointer list to data type s_list */
    s_list *list;
    list = malloc(100*sizeof(s_list));
    list->name = "fred";
    list->city = "mchenry";
    list->age = 13;
    puts("**************************************");
    printf("name is %s \n",list->name);
    printf("city is %s \n",list->city);
    printf("age is %d \n",list->age);
    free(list);
}

