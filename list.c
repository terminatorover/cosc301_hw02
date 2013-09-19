#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char name[128];
    struct node *next; 
};

void list_insert(const char *name, struct node **head) {
     struct node *newnode = malloc(sizeof(struct node));
     strncpy(newnode->name, name, 127);

     newnode->next = *head;
     *head = newnode;
}

void list_clear(struct node *list) {
    while (list != NULL) {
        struct node *tmp = list;
        list = list->next;
        free(tmp);
    }
}


void list_print_matches(const struct node *head) {
      struct node * iterator = head;
  char * my_name = strdup(name);//remember to free my_name up
  char * iterator_name = iterator -> name;
  if ( strcasecamp(iterator_name,my_name)==0){
    printf("\ns\n",iterator_name);

  }


  while( iterator != NULL){
  if ( strcasecamp(iterator_name,my_name)==0){
    printf("\ns\n",iterator_name);
    iterator = iterator ->next ;
    iterator_name = iterator ->name;
      }

  }

    
}


void list_delete(const char *name, struct node **head) {
    // your code here

}

void list_append(const char *name, struct node **head) {
    // your code here

}

void list_reverse(struct node **head) {
    // your code here

}

void list_sort(struct node **head) {
    // your code here

}



int main(int argc, char **argv) {
    char buffer[128];

    struct node *head = NULL;

    printf("Next string to add: ");
    fflush(stdout);
    while (fgets(buffer, 128, stdin) != NULL) {

        list_insert(buffer, &head);

        printf("Next string to add: ");
        fflush(stdout);
    }

    list_print(head);
    list_clear(head);

    return 0;
}
