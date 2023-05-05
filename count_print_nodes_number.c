//L1 Student university of chlef UHBC 

#include <stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *link;
  
};
int count_node_number(struct node *head);
void print_data(struct node *head);

int main()
{
    // the first node 
    struct node *head,*q;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 16;
    head->link = NULL;
    
    // the second node
   struct node *current = malloc(sizeof(struct node));
   current->data = 19;
   current->link = NULL;
   head->link = current;
    
    // the third node
   current = malloc(sizeof(struct node));
   current->data = 50;
   current->link = NULL;
   head->link->link = current;
   
    //the fourth node
   current = malloc(sizeof(struct node));
   current->data = 90;
   current->link=NULL;
   head->link->link->link = current;
   
   //the fifth node
   current = malloc(sizeof(struct node));
   current->data = 100;
   current->link = NULL;
   head->link->link->link->link = current;
   
   
  printf("the number of nodes are : %d",count_node_number(head));
  
  print_data(head);
   
}
int count_node_number(struct node *head){
  int counter = 0;
  struct node *p;
  p = head;
  if(p == NULL){
     printf("the list is empty");
  }
  else{
    while(p != NULL){
       counter++;
       p = p->link;
    }
   }
  return counter;
}

void print_data(struct node *head){
  if(head == NULL){
    printf("the list is empty");
  }
  else{
    struct node *ptr;
    ptr = head;
    while(ptr != NULL){
      printf("\n%d",ptr->data);
      ptr = ptr->link;
    }
  }
}
