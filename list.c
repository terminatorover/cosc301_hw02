#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

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


void list_print_matches(const char * name, const struct node *head) {
  struct node * iterator = head;
  char * my_name = strdup(name);//remember to free my_name up
  char * iterator_name = iterator -> name;
  




  while( iterator != NULL){
  if ( strcasecamp(iterator_name,my_name)==0){
    printf("\n%s\n",iterator_name);
    iterator = iterator ->next ;
    iterator_name = iterator ->name;
      }

  }

  free(my_name);
}


int  list_delete(const char *name, struct node **head) {
  struct node * iterator  = * head;//I have a ptr to the head of the ll
  struct node * follower = * head;// This is also a ptr to the head of the ll(at the moment)
  // It's function is the be able to build a new bridge. 
  char * my_name = strdup(name);// needed since the input is a const string(need to free this
  if (strcasecmp(( iterator -> name),my_name )==0){
    struct node * ptr_to_head = iterator -> next ;
    head = & ptr_to_head ;
    
  }
  iterator = iterator ->next ;
  int check = 0;
  while( iterator != NULL){
  if (strcasecmp(( iterator -> name),my_name )==0){
    follower -> next = iterator -> next ;
    check = 1 ;

  }else { iterator = iterator -> next ;
    follower = follower -> next ;

     }
  follower = follower -> next ;
   iterator = iterator -> next ;
  
  }
  return check;
  free(my_name); 
  
}

void list_append(const char *name, struct node **head) {
  char * my_name = strdup(name);
  struct  node * iterator =  * head; 
  struct node * new_node = NULL;

  strcpy( new_node -> name, my_name);

  new_node -> next = NULL;
  struct node * temp  = * head ;
  while (iterator !=NULL){
    
    iterator = iterator -> next;
    if ( iterator != NULL){
      temp = temp -> next;
      }
  }
  temp ->next = new_node ; 

 
free (my_name);
}
void list_reverse(struct node **head) {
  struct node * head_ptr = * head ;
  struct node * itr = * head;
  struct node * fol = NULL;
  struct node * temp ;
  if ( head_ptr -> next == NULL ){
    
  }
  
  while (itr != NULL){
    temp =  itr -> next;
    itr ->next = fol;
    fol -> next = itr;
    itr = temp;
  }
  head = & fol;

}

void list_sort(struct node **head) {


}



//int main(int argc, char **argv) {
int main( ) { 
/* Code written by Professor
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
    */
    /* My test code 
    struct node * head ;
    struct node * sec_node;
    struct node * third_node;
    head -> name = "first node";
    head -> next = sec_node;
    sec_node ->name = second_node;
    sec_node -> next = third_node;
    third_node -> name = "third node ";
    third_node -> next = NULL;
    

    */
    struct node * head ;
    head -> name = {'d','\0'};
     head ->next = NULL;
    return 0;
}
